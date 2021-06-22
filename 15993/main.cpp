//
//  main.cpp
//  15993
//
//  Created by songhee on 2021/06/22.
//

#include <iostream>
#include <algorithm>
#define ll long long
#define MAX 100000+1
#define MOD 1000000009
using namespace std;

int T, N, N_maxi = -1;
int N_arr[MAX];
ll dp[MAX][2];

int main(int argc, const char * argv[]) {
    scanf("%d", &T);
    for(int test = 1; test <= T; test++)
    {
        scanf("%d", &N);
        N_maxi = max(N_maxi, N);
        N_arr[test] = N;
    }
    
    dp[1][0] = 1;
    dp[2][0] = dp[2][1] = 1;
    dp[3][0] = dp[3][1] = 2;
    
    for(int i = 4; i <= N_maxi; i++)
    {
        dp[i][0] = (dp[i-3][1] + dp[i-2][1] + dp[i-1][1]) % MOD;
        dp[i][1] = (dp[i-3][0] + dp[i-2][0] + dp[i-1][0]) % MOD;
    }
    
    for(int test = 1; test <= T; test++)
    {
        int i = N_arr[test];
        printf("%lld %lld\n", dp[i][0] % MOD, dp[i][1] % MOD);
    }
    return 0;
}
