//
//  main.cpp
//  2688_2
//
//  Created by songhee on 2021/05/07.
//

#include <iostream>
#include <cstring>
#define MAX 64+1

int T, N;
long dp[MAX][10];

int main(int argc, const char * argv[]) {
    scanf("%d", &T);
    for(int j = 0; j <= 9; j++) dp[1][j] = 1;
    for(int i = 2; i <= MAX; i++)
    {
        for(int j = 0; j <= 9; j++)
        {
            for(int k = 0; k <= j; k++) dp[i][j] += dp[i-1][k];
        }
    }
    for(int test = 0; test < T; test++)
    {
        long SUM = 0;
        scanf("%d", &N);
        for(int j = 0; j <= 9; j++) SUM += dp[N][j];
        printf("%ld\n", SUM);
    }
    return 0;
}
