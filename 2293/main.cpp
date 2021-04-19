//
//  main.cpp
//  2293
//
//  Created by songhee on 2021/04/15.
//

#include <iostream>
#define COIN_MAX 100
#define DP_MAX 10000+1

int n, k;
int coin[COIN_MAX], dp[DP_MAX] = {1, };

int main(int argc, const char * argv[]) {
    scanf("%d %d", &n, &k);
    for(int i = 0; i < n; i++) scanf("%d", &coin[i]);
    for(int i = 0; i < n; i++)
    {
        for(int j = coin[i]; j <= k; j++)
        {
            dp[j] += dp[j-coin[i]];
        }
    }
    printf("%d\n", dp[k]);
    return 0;
}
