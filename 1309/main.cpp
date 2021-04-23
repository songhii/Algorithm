//
//  main.cpp
//  1309
//
//  Created by songhee on 2021/04/22.
//

#include <iostream>
#define MAX 100000+1
#define MOD 9901

int N;
int dp[MAX][3];

int main(int argc, const char * argv[]) {
    scanf("%d", &N);
    for(int j = 0; j <= 2; j++) dp[1][j] = 1;
    for(int i = 2; i <= N; i++)
    {
        dp[i][0] = (dp[i-1][0] + dp[i-1][1] + dp[i-1][2]) % MOD;
        dp[i][1] = (dp[i-1][0] + dp[i-1][2]) % MOD;
        dp[i][2] = (dp[i-1][0] + dp[i-1][1]) % MOD;
    }
    printf("%d\n", (dp[N][0] + dp[N][1] + dp[N][2]) % MOD);
    return 0;
}
