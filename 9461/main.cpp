//
//  main.cpp
//  9461
//
//  Created by songhee on 2021/03/09.
//

#include <iostream>
#define MAX 100+1

int T, N;
long long dp[MAX];

long long padovan(int n)
{
    if(n == 0) return 0;
    else if(n == 1 || n == 2) return 1;
    if(dp[n] > 0) return dp[n];
    dp[n] = padovan(n-2) + padovan(n-3);
    return dp[n];
}

int main(int argc, const char * argv[]) {
    scanf("%d", &T);
    for(int test = 0; test < T; test++)
    {
        scanf("%d", &N);
        printf("%lld\n", padovan(N));
    }
    return 0;
}
