//
//  main.cpp
//  11051
//
//  Created by songhee on 2021/05/04.
//

#include <iostream>
#define MAX 1000+1
#define MOD 10007

int N, K;
int dp[MAX][MAX];

int main(int argc, const char * argv[]) {
    scanf("%d %d", &N, &K);
    dp[1][0] = dp[1][1] = 1;
    for(int i = 2; i <= N; i++)
    {
        for(int j = 0; j <= K; j++)
        {
            dp[i][j] = ((dp[i-1][j-1] % MOD) + (dp[i-1][j] % MOD)) % MOD;
        }
    }
    printf("%d\n", dp[N][K]);
    return 0;
}
