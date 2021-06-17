//
//  main.cpp
//  15990
//
//  Created by songhee on 2021/06/15.
//

#include <iostream>
#include <algorithm>
#define ll long long
#define MAX 100000+1
#define MOD 1000000009
using namespace std;

int T, N, maxi = -1;
int A[MAX];
ll dp[MAX][4];

int main(int argc, const char * argv[]) {
    scanf("%d", &T);
    for(int test = 1; test <= T; test++)
    {
        scanf("%d", &N);
        maxi = max(maxi, N);
        A[test] = N;
    }
    
    dp[1][1] = dp[2][2] = 1;
    dp[3][1] = dp[3][2] = dp[3][3] = 1;
    
    for(int i = 4; i <= maxi; i++)
    {
        dp[i][1] = (dp[i-1][2] + dp[i-1][3] % MOD);
        dp[i][2] = (dp[i-2][1] + dp[i-2][3] % MOD);
        dp[i][3] = (dp[i-3][1] + dp[i-3][2] % MOD);
    }
    
    for(int test = 1; test <= T; test++)
    {
        int i = A[test];
        printf("%lld\n", (dp[i][1] + dp[i][2] + dp[i][3]) % MOD);
    }
    return 0;
}
