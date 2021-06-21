//
//  main.cpp
//  15992
//
//  Created by songhee on 2021/06/21.
//

#include <iostream>
#include <algorithm>
#define ll long long
#define MAX 1000+1
#define MOD 1000000009
using namespace std;

int T, N, M, N_maxi = -1, M_maxi = -1;
int N_arr[MAX], M_arr[MAX];
ll dp[MAX][MAX];

int main(int argc, const char * argv[]) {
    scanf("%d", &T);
    for(int test = 1; test <= T; test++)
    {
        scanf("%d %d", &N, &M);
        N_maxi = max(N_maxi, N);
        M_maxi = max(M_maxi, M);
        N_arr[test] = N;
        M_arr[test] = M;
    }
    
    dp[1][1] = 1;
    dp[2][1] = dp[2][2] = 1;
    dp[3][1] = dp[3][3] = 1; dp[3][2] = 2;
    
    for(int i = 4; i <= N_maxi; i++)
    {
        for(int j = 1; j <= i; j++)
            dp[i][j] = (dp[i-3][j-1] + dp[i-2][j-1] + dp[i-1][j-1]) % MOD;
    }
    
    for(int test = 1; test <= T; test++)
    {
        int i = N_arr[test];
        int j = M_arr[test];
        printf("%lld\n", dp[i][j] % MOD);
    }
    return 0;
}
