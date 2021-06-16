//
//  main.cpp
//  15988
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
ll A[MAX], dp[MAX] = {1, 1, };

int main(int argc, const char * argv[]) {
    scanf("%d", &T);
    for(int test = 1; test <= T; test++)
    {
        scanf("%d", &N);
        maxi = max(maxi, N);
        A[test] = N;
    }
    
    for(int i = 2; i <= maxi; i++)
    {
        if(1 <= i)
            dp[i] += (dp[i-1] % MOD);
        if(2 <= i)
            dp[i] += (dp[i-2] % MOD);
        if(3 <= i)
            dp[i] += (dp[i-3] % MOD);
    }
    
    for(int test = 1; test <= T; test++) printf("%lld\n", dp[A[test]] % MOD);
    return 0;
}
