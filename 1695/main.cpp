//
//  main.cpp
//  1695
//
//  Created by songhee on 2021/05/14.
//

#include <iostream>
#include <algorithm>
#include <cstring>
#define MAX 5000
using namespace std;

int N;
int A[MAX], dp[MAX][MAX];

int palindrome(int L, int R)
{
    if(R < L) return 0;
    int &cur = dp[L][R];
    if(cur != -1) return cur;
    if(A[L] == A[R]) cur = palindrome(L+1, R-1);
    else cur = min(palindrome(L, R-1) + 1, palindrome(L+1, R) + 1);
    return cur;
}

int main(int argc, const char * argv[]) {
    scanf("%d", &N);
    memset(dp, -1, sizeof(dp));
    for(int i = 0; i < N; i++) scanf("%d", &A[i]);
    printf("%d\n", palindrome(0, N-1));
    return 0;
}
