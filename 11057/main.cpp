//
//  main.cpp
//  11057
//
//  Created by songhee on 2021/04/20.
//

#include <iostream>
#define MAX 1000+1
#define MOD 10007

int N, ans = 0;
int dp[MAX][10];

int main(int argc, const char * argv[]) {
    scanf("%d", &N);
    for(int j = 0; j <= 9; j++) dp[1][j] = 1;
    for(int i = 2; i <= N; i++)
    {
        for(int j = 0; j <= 9; j++)
        {
            for(int k = 0; k <= j; k++)
            {
                dp[i][j] = (dp[i][j] + dp[i-1][k]) % MOD;
            }
        }
    }
    for(int j = 0; j <= 9; j++) ans = (ans + dp[N][j]) % MOD;
    printf("%d\n", ans % MOD);
    return 0;
}

