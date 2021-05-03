//
//  main.cpp
//  9084
//
//  Created by songhee on 2021/05/03.
//

#include <iostream>
#include <cstring>
#define COIN_MAX 20
#define DP_MAX 10000+1

int t, n, k;
int coin[COIN_MAX], dp[DP_MAX] = {1, };

int main(int argc, const char * argv[]) {
    scanf("%d", &t);
    for(int test = 0; test < t; test++)
    {
        memset(coin, 0, COIN_MAX);
        memset(dp, 0, DP_MAX); dp[0] = 1;
        scanf("%d", &n);
        for(int i = 0; i < n; i++) scanf("%d", &coin[i]);
        scanf("%d", &k);
        for(int i = 0; i < n; i++)
        {
            for(int j = coin[i]; j <= k; j++)
            {
                dp[j] += dp[j-coin[i]];
            }
        }
        printf("%d\n", dp[k]);
    }
    return 0;
}
