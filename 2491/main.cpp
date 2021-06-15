//
//  main.cpp
//  2491
//
//  Created by songhee on 2021/06/15.
//

#include <iostream>
#include <algorithm>
#define MAX 100000+1
using namespace std;

int N, maxi = -10000;
int A[MAX], add_dp[MAX], min_dp[MAX];

int main(int argc, const char * argv[]) {
    scanf("%d", &N);
    for(int i = 1; i <= N; i++) scanf("%d", &A[i]);
    for(int i = 1; i <= N; i++)
    {
        add_dp[i] = 1;
        min_dp[i] = 1;
        if(A[i-1] <= A[i]) add_dp[i] = max(add_dp[i], add_dp[i-1]+1);
        if(A[i-1] >= A[i]) min_dp[i] = max(min_dp[i], min_dp[i-1]+1);
    }
    for(int i = 1; i <= N; i++)
    {
        maxi = max(maxi, add_dp[i]);
        maxi = max(maxi, min_dp[i]);
    }
    printf("%d\n", maxi);
    return 0;
}
