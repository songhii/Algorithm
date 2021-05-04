//
//  main.cpp
//  11050_2
//
//  Created by songhee on 2021/05/04.
//

#include <iostream>
#define MAX 10+1

int N, K, a, b;
int dp[MAX];

int fac(int n)
{
    if(dp[n] > 0) return dp[n];
    return n * fac(n-1);
}

int main(int argc, const char * argv[]) {
    scanf("%d %d", &N, &K);
    dp[0] = dp[1] = 1;
    for(int i = 2; i <= N; i++) dp[i] = fac(i);
    a = fac(N);
    b = fac(K) * fac(N-K);
    printf("%d\n", a/b);
    return 0;
}
