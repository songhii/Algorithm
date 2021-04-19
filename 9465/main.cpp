//
//  main.cpp
//  9465
//
//  Created by songhee on 2021/04/14.
//

#include <iostream>
#include <algorithm>
#include <cstring>
#define MAX 100000+1
using namespace std;

int T, N;
int S[2][MAX], dp[2][MAX];

int main(int argc, const char * argv[]) {
    scanf("%d", &T);
    for(int test = 0; test < T; test++)
    {
        memset(S, 0, sizeof(S));
        memset(dp, 0, sizeof(dp));
        
        scanf("%d", &N);
        for(int i = 0; i < 2; i++)
        {
            for(int j = 1; j <= N; j++) scanf("%d", &S[i][j]);
        }
        dp[0][1] = S[0][1];
        dp[1][1] = S[1][1];
        for(int j = 2; j <= N; j++)
        {
            dp[0][j] = S[0][j] + max(dp[1][j-2], dp[1][j-1]);
            dp[1][j] = S[1][j] + max(dp[0][j-2], dp[0][j-1]);
        }
        printf("%d\n", max(dp[0][N], dp[1][N]));
    }
    return 0;
}
