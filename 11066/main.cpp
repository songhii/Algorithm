//
//  main.cpp
//  11066
//
//  Created by songhee on 2021/04/09.
//

#include <iostream>
#include <cstring>
#define MAX 500+1
using namespace std;

int T, K;
int C[MAX], sum[MAX], dp[MAX][MAX];

int main(int argc, const char * argv[]) {
    scanf("%d", &T);
    for(int test = 0; test < T; test++)
    {
        memset(C, 0, sizeof(C));
        memset(dp, 0, sizeof(dp));

        scanf("%d", &K);
        for(int k = 1; k <= K; k++)
        {
            scanf("%d", &C[k]);
            sum[k] = sum[k-1] + C[k];
        }
        
        for(int i = 1; i <= K; i++)
        {
            for(int j = 1; j <= K-i; j++)
            {
                dp[j][i+j] = 2100000000;
                for(int k = j; k < i+j; k++)
                {
                    dp[j][i+j] = min(dp[j][i+j], dp[j][k] + dp[k+1][i+j] + sum[i+j] - sum[j-1]);
                }
            }
        }
        printf("%d\n", dp[1][K]);
    }
    return 0;
}
