//
//  main.cpp
//  2225
//
//  Created by songhee on 2021/05/21.
//

#include <iostream>
#define MAX 200+1
#define MOD 1000000000

int N, K;
int dp[MAX][MAX];

int main(int argc, const char * argv[]) {
    scanf("%d %d", &N, &K);
    for(int i = 1; i <= K; i++) dp[i][0] = 1;
    for(int i = 1; i <= K; i++)
    {
        for(int j = 1; j <= N; j++)
            dp[i][j] = ((dp[i][j-1] % MOD) + (dp[i-1][j] % MOD)) % MOD;
    }
    printf("%d\n", dp[K][N]);
    return 0;
}
