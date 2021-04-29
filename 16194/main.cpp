//
//  main.cpp
//  16194
//
//  Created by songhee on 2021/04/29.
//

#include <iostream>
#include <algorithm>
#define MAX 1000+1
using namespace std;

int N;
int P[MAX], dp[MAX];

int main(int argc, const char * argv[]) {
    scanf("%d", &N);
    for(int i = 1; i <= N; i++) scanf("%d", &P[i]);
    for(int i = 1; i <= N; i++)
    {
        dp[i] = P[i];
        for(int j = 1; j < i; j++)
            dp[i] = min(dp[i], dp[j] + P[i-j]);
    }
    printf("%d\n", dp[N]);
    return 0;
}
