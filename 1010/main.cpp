//
//  main.cpp
//  1010
//
//  Created by songhee on 2021/04/13.
//

#include <iostream>
#include <cstring>
#define MAX 30+1

int T, N, M;
int dp[MAX][MAX];

int main(int argc, const char * argv[]) {
    scanf("%d", &T);
    for(int test = 0; test < T; test++)
    {
        memset(dp, 0, sizeof(dp));
        scanf("%d %d", &N, &M);
        for(int j = 1; j <= M; j++) dp[1][j] = j;
        for(int i = 2; i <= N; i++)
        {
            for(int j = 1; j <= M; j++)
            {
                for(int k = j-1; k > 0; k--) dp[i][j] += dp[i-1][k];
            }
        }
        printf("%d\n", dp[N][M]);
    }
    return 0;
}
