//
//  main.cpp
//  15991
//
//  Created by songhee on 2021/06/17.
//

#include <iostream>
#include <algorithm>
#define ll long long
#define MAX 100000+1
#define MOD 1000000009
using namespace std;

int T, N, maxi = -1;
int A[MAX];
ll dp[MAX] = {0, 1, 2, 2, 3, 3, 6, };

int main(int argc, const char * argv[]) {
    scanf("%d", &T);
    for(int test = 1; test <= T; test++)
    {
        scanf("%d", &N);
        maxi = max(maxi, N);
        A[test] = N;
    }
    
    for(int i = 7; i <= maxi; i++)
        dp[i] = (dp[i-2] + dp[i-4] + dp[i-6]) % MOD;
    
    
    for(int test = 1; test <= T; test++)
    {
        int i = A[test];
        printf("%lld\n", dp[i] % MOD);
    }
    return 0;
}
