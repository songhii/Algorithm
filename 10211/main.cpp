//
//  main.cpp
//  10211
//
//  Created by songhee on 2021/06/23.
//

#include <iostream>
#include <algorithm>
#include <cstring>
#define MAX 1000+1
using namespace std;

int T, N, maxi = -10000;
int X[MAX], dp[MAX];

int main(int argc, const char * argv[]) {
    scanf("%d", &T);
    for(int test = 1; test <= T; test++)
    {
        maxi = -10000;
        memset(dp, 0, sizeof(dp));
        scanf("%d", &N);
        for(int i = 1; i <= N; i++) scanf("%d", &X[i]);
        for(int i = 1; i <= N; i++)
        {
            dp[i] = X[i];
            dp[i] = max(dp[i], dp[i-1] + X[i]);
        }
        for(int i = 1; i <= N; i++)
            maxi = max(maxi, dp[i]);
        printf("%d\n", maxi);
    }
    return 0;
}
