//
//  main.cpp
//  12865
//
//  Created by songhee on 2021/04/05.
//

#include <iostream>
#include <algorithm>
using namespace std;

int N, K;
int W[101], V[101], dp[101][100001];

int main(int argc, const char * argv[]) {
    scanf("%d %d", &N, &K);
    for(int n = 1; n <= N; n++) scanf("%d %d", &W[n], &V[n]);

    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= K; j++)
        {
            if(j-W[i] >= 0) dp[i][j] = max(dp[i-1][j], dp[i-1][j-W[i]]+V[i]);
            else dp[i][j] = dp[i-1][j];
        }
    }
    printf("%d\n", dp[N][K]);
    return 0;
}
