//
//  main.cpp
//  11055
//
//  Created by songhee on 2021/04/21.
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
    for(int i = 0; i < N; i++)
    {
        dp[i] = A[i];
        for(int j = 0; j < i; j++)
        {
            if(A[j] < A[i])
                dp[i] = max(dp[i], dp[j] + A[i]);
        }
    }
    sort(dp, dp+N);
    printf("%d\n", dp[N-1]);
    return 0;
}
