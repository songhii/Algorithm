//
//  main.cpp
//  10164
//
//  Created by songhee on 2021/05/11.
//

#include <iostream>
#define MAX 15+1

int N, M, K, kx, ky, tmp, insert = 1;
int dp[MAX][MAX];

int main(int argc, const char * argv[]) {
    scanf("%d %d %d", &N, &M, &K);
    
    if(0 < K)
    {
        for(int i = 1; i <= N; i++)
        {
            for(int j = 1; j <= M; j++)
            {
                if(K == insert)
                {
                    kx = i; ky = j;
                }
                insert++;
            }
        }
    }
    
    dp[1][1] = 1;
    if(K == 0)
    {
        for(int i = 1; i <= N; i++)
        {
            for(int j = 1; j <= M; j++)
            {
                dp[i][j] += dp[i-1][j] + dp[i][j-1];
            }
        }
        printf("%d\n", dp[N][M]);
    }
    else
    {
        for(int i = 1; i <= kx; i++)
        {
            for(int j = 1; j <= ky; j++)
            {
                dp[i][j] += dp[i-1][j] + dp[i][j-1];
            }
        }
        tmp = dp[kx][ky];
        dp[kx][ky] = 1;
        for(int i = kx; i <= N; i++)
        {
            for(int j = ky; j <= M; j++)
            {
                if(i == kx && j == ky) continue;
                dp[i][j] += dp[i-1][j] + dp[i][j-1];
            }
        }
        printf("%d\n", tmp * dp[N][M]);
    }
    return 0;
}
