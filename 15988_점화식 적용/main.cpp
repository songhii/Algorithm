//
//  main.cpp
//  15988_점화식 적용
//
//  Created by songhee on 2021/06/16.
//

#include <iostream>
#include <algorithm>
#define ll long long
#define MAX 1000000+1
#define MOD 1000000009
using namespace std;

int T, N, maxi = -1;
ll A[MAX], dp[MAX] = {0, 1, 2, 4, };

int main(int argc, const char * argv[]) {
    scanf("%d", &T);
    for(int test = 1; test <= T; test++)
    {
        scanf("%d", &N);
        maxi = max(maxi, N);
        A[test] = N;
    }
    
    for(int i = 4; i <= maxi; i++)
    {
        dp[i] = (dp[i-1] % MOD) + (dp[i-2] % MOD) + (dp[i-3] % MOD);
    }
    
    for(int test = 1; test <= T; test++) printf("%lld\n", dp[A[test]] % MOD);
    return 0;
}
