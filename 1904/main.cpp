//
//  main.cpp
//  1904
//
//  Created by songhee on 2021/03/08.
//

#include <iostream>
#define MAX 1000000+1

int N;
long long dp[MAX] = {0, 1, 2, };

long long tile(int n)
{
    if(n == 1) return 1;
    else if(n == 2) return 2;
    if(dp[n] > 0) return dp[n];
    dp[n] = (tile(n-1) + tile(n-2)) % 15746;
    return dp[n];
}

int main(int argc, const char * argv[]) {
    scanf("%d", &N);
    printf("%lld\n", tile(N));
    return 0;
}
