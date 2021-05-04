//
//  main.cpp
//  11050
//
//  Created by songhee on 2021/05/04.
//

#include <iostream>
#define MAX 10+1

int N, K;
int dp[MAX][MAX];

int fac(int n)
{
    if(n <= 1) return 1;
    else return n * fac(n-1);
}

int main(int argc, const char * argv[]) {
    scanf("%d %d", &N, &K);
    for(int i = 1; i <= N; i++)
    {
        dp[i][0] = 1;
        dp[i][1] = i;
    }
    for(int i = 1; i <= N; i++)
    {
        for(int j = 2; j <= K; j++)
        {
            if(dp[i][j] > 0) dp[i][j] = dp[i][i-j];
            else
            {
                dp[i][j] = fac(i) / (fac(j) * fac(i-j));
            }
        }
    }
    printf("%d\n", dp[N][K]);
    return 0;
}
