//
//  main.cpp
//  2502_2
//
//  Created by songhee on 2021/05/06.
//

#include <iostream>
#define MAX 30+1

int D, K;
int dp[MAX][2];

int main(int argc, const char * argv[]) {
    scanf("%d %d", &D, &K);
    dp[1][0] = dp[2][1] = 1;
    for(int i = 3; i <= D; i++)
    {
        dp[i][0] = dp[i-1][0] + dp[i-2][0];
        dp[i][1] = dp[i-1][1] + dp[i-2][1];
    }
    for(int i = 1; i < K; i++)
    {
        for(int j = i; j < K; j++)
        {
            if(i * dp[D][0] + j * dp[D][1] == K)
            {
                printf("%d\n%d\n", i, j);
                return 0;
            }
            if(i * dp[D][0] + j * dp[D][1] > K) break;
        }
    }
    return 0;
}
