//
//  main.cpp
//  11060
//
//  Created by songhee on 2021/06/10.
//

#include <iostream>
#include <algorithm>
#include <cstring>
#define MAX 1000+1
using namespace std;

int N;
int A[MAX], dp[MAX];

int main(int argc, const char * argv[]) {
    scanf("%d", &N);
    memset(dp, 10000, sizeof(dp));
    dp[1] = 0;
    for(int i = 1; i <= N; i++) scanf("%d", &A[i]);
    for(int i = 2; i <= N; i++)
    {
        for(int j = 1; j < i; j++)
        {
            if(i-j <= A[j])
            {
                dp[i] = min(dp[i], dp[j]+1);
            }
        }
    }
    if(10000 <= dp[N] || (1 < N && A[1] == 0)) printf("-1\n");
    else printf("%d\n", dp[N]);
    return 0;
}
