//
//  main.cpp
//  2688
//
//  Created by songhee on 2021/05/07.
//

#include <iostream>
#include <cstring>
#define MAX 64+1

int T, N;
long SUM = 0;
long dp[MAX][10];

int main(int argc, const char * argv[]) {
    scanf("%d", &T);
    for(int test = 0; test < T; test++)
    {
        SUM = 0;
        memset(dp, 0, sizeof(dp));
        for(int j = 0; j <= 9; j++) dp[1][j] = 1;
        scanf("%d", &N);
        for(int i = 2; i <= N; i++)
        {
            for(int j = 0; j <= 9; j++)
            {
                for(int k = 0; k <= j; k++)
                {
                    dp[i][j] += dp[i-1][k];
                }
            }
        }
        for(int j = 0; j <= 9; j++) SUM += dp[N][j];
        printf("%ld\n", SUM);
    }
    return 0;
}
