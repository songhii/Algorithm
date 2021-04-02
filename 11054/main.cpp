//
//  main.cpp
//  11054
//
//  Created by songhee on 2021/03/29.
//

#include <iostream>
#include <algorithm>
#define MAX 1000
using namespace std;

int N;
int A[MAX], dp[MAX], dp_rev[MAX];

int main(int argc, const char * argv[]) {
    scanf("%d", &N);
    for(int i = 0; i < N; i++) scanf("%d", &A[i]);
    for(int end = 0 ; end < N; end++)
    {
        dp[end] = 1;
        for(int tmp = 0; tmp < end; tmp++)
        {
            if(A[tmp] < A[end]) dp[end] = max(dp[end], dp[tmp]+1);
        }
    }
    for(int end = N-1 ; end > -1; end--)
    {
        for(int tmp = N-1; tmp > end; tmp--)
        {
            if(A[tmp] < A[end]) dp_rev[end] = max(dp_rev[end], dp_rev[tmp]+1);
        }
    }
    for(int tmp = 0; tmp < N; tmp++) dp[tmp] += dp_rev[tmp];
    sort(dp, dp+N);
    printf("%d\n", dp[N-1]);
    return 0;
}
