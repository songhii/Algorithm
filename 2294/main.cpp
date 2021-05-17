//
//  main.cpp
//  2294
//
//  Created by songhee on 2021/05/14.
//

#include <iostream>
#include <algorithm>
#include <cstring>
#define COIN_MAX 100
#define DP_MAX 10000+1
using namespace std;

int N, K;
int coin[COIN_MAX], dp[DP_MAX];

int main(int argc, const char * argv[]) {
    memset(dp, 1000000, sizeof(dp));
    dp[0] = 1;
    scanf("%d %d", &N, &K);
    for(int i = 0; i < N; i++) scanf("%d", &coin[i]);
    for(int i = 0; i < N; i++) // i번째 동전으로
    {
        for(int j = coin[i]; j <= K; j++) // j 원 만드는 모든 경우의 수
        {
            dp[j] = min(dp[j], dp[j-coin[i]] + 1);
        }
    }
    if(dp[K] < 100001) printf("%d\n", dp[K]-1);
    else printf("-1\n");
    return 0;
}
