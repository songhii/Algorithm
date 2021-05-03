//
//  main.cpp
//  15486
//
//  Created by songhee on 2021/04/30.
//

#include <iostream>
#include <algorithm>
#define MAX 1500000+1
using namespace std;

int N;
int T[MAX], P[MAX], dp[MAX];

int main(int argc, const char * argv[]) {
    scanf("%d", &N);
    for(int i = 1; i <= N; i++) scanf("%d %d", &T[i], &P[i]);
    for(int i = N; i >= 1; i--)
    {
        if(N + 1 < i + T[i]) dp[i] = dp[i+1];
        else dp[i] = max(dp[i+1], dp[i+T[i]] + P[i]);
    }
    for(int i = N; i >= 1; i--)
    {
        printf("%d ", dp[i]);
    }
    printf("\n");
    sort(dp, dp + N + 1);
    printf("%d\n", dp[N]);
    return 0;
}
