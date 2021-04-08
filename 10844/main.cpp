//
//  main.cpp
//  10844
//
//  Created by songhee on 2021/03/16.
//

#include <iostream>
#include <algorithm>
#define MAX 100+1

int N;
int mod = 1000000000;
long long ans = 0;
int dp[MAX][10];

int main(int argc, const char * argv[]) {
    scanf("%d", &N);
    for(int l = 1; l <= 9; l++) dp[1][l] = 1;
    for(int n = 2; n <= N; n++)
    {
        for(int l = 0; l <= 9; l++)
        {
            if(l == 0) dp[n][l] = dp[n-1][l+1] % mod;
            else if(1 <= l && l <= 8) dp[n][l] = (dp[n-1][l-1] + dp[n-1][l+1]) % mod;
            else dp[n][l] = dp[n-1][l-1] % mod;
        }
    }
    for(int l = 0; l <= 9; l++)
    {
        ans += dp[N][l];
    }
    printf("%lld\n", ans % mod);
    return 0;
}
