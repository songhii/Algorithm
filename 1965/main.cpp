//
//  main.cpp
//  1965
//
//  Created by songhee on 2021/06/08.
//

#include <iostream>
#include <algorithm>
#define MAX 1000+1
using namespace std;

int n, maxi = -1;
int A[MAX], dp[MAX];

int main(int argc, const char * argv[]) {
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) scanf("%d", &A[i]);
    for(int i = 1; i <= n; i++)
    {
        dp[i] = 1;
        for(int j = 1; j < i; j++)
        {
            if(A[j] < A[i])
                dp[i] = max(dp[i], dp[j]+1);
        }
    }
    for(int i = 1; i <= n; i++) maxi = max(maxi, dp[i]);
    printf("%d\n", maxi);
    return 0;
}
