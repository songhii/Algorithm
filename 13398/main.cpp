//
//  main.cpp
//  13398
//
//  Created by songhee on 2021/06/14.
//

#include <iostream>
#include <algorithm>
#include <cstring>
#define MAX 100000+1
using namespace std;

int N, maxi = -10000;
int A[MAX], dp[2][MAX];

int main(int argc, const char * argv[]) {
    scanf("%d", &N);
    memset(dp, -10000, sizeof(dp));
    for(int i = 1; i <= N; i++) scanf("%d", &A[i]);
    for(int i = 1; i <= N; i++)
    {
        dp[0][i] = A[i];
        dp[0][i] = max(dp[0][i], dp[0][i-1] + A[i]);
    }
    for(int i = N; i > 0; i--)
    {
        dp[1][i] = A[i];
        dp[1][i] = max(dp[1][i], dp[1][i+1] + A[i]);
    }
    for(int i = 1; i <= N; i++) maxi = max(maxi, dp[0][i]);
    for(int i = 1; i <= N; i++) maxi = max(maxi, dp[0][i-1] + dp[1][i+1]);
    printf("%d\n", maxi);
    return 0;
}
