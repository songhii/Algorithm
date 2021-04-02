//
//  main.cpp
//  11053
//
//  Created by songhee on 2021/03/29.
//

#include <iostream>
#include <algorithm>
#define MAX 1000
using namespace std;

int N;
int A[MAX], dp[MAX];

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
    sort(dp, dp+N);
    printf("%d\n", dp[N-1]);
    return 0;
}
