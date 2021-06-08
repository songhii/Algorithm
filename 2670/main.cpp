//
//  main.cpp
//  2670
//
//  Created by songhee on 2021/06/08.
//

#include <iostream>
#include <algorithm>
#define MAX 10000+1
using namespace std;

int N;
double maxi = -1.0, A[MAX], dp[MAX];

int main(int argc, const char * argv[]) {
    scanf("%d", &N);
    for(int i = 1; i <= N; i++) scanf("%lf", &A[i]);
    for(int i = 1; i <= N; i++)
    {
        dp[i] = A[i];
        dp[i] = max(dp[i], dp[i-1] * A[i]);
    }
    for(int i = 1; i <= N; i++) maxi = max(maxi, dp[i]);
    printf("%.3lf\n", maxi);
    return 0;
}
