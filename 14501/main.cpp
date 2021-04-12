//
//  main.cpp
//  14501
//
//  Created by songhee on 2021/04/12.
//

#include <iostream>
#include <algorithm>
#define MAX 15+1
using namespace std;

int N;
int T[MAX], P[MAX], dp[MAX];

int main(int argc, const char * argv[]) {
    scanf("%d", &N);
    for(int n = 1; n <= N; n++) scanf("%d %d", &T[n], &P[n]);
    for(int i = 1; i <= N; i++)
    {
        if(i + T[i] > N+1) continue;
        dp[i] = P[i];
        for(int j = 1; j < i; j++)
        {
            if(j + T[j] <= i)
                dp[i] = max(dp[i], dp[j] + P[i]);
        }
    }
    sort(dp, dp+N+1);
    printf("%d\n", dp[N]);
    return 0;
}
