//
//  main.cpp
//  2631
//
//  Created by songhee on 2021/04/29.
//

#include <iostream>
#include <algorithm>
#define MAX 200+1
using namespace std;

int N, maxi = -1;
int C[MAX], dp[MAX];

int main(int argc, const char * argv[]) {
    scanf("%d", &N);
    for(int i = 1; i <= N; i++) scanf("%d", &C[i]);
    for(int i = 1; i <= N; i++)
    {
        dp[i] = 1;
        for(int j = 1; j < i; j++)
        {
            if(C[j] < C[i])
                dp[i] = max(dp[i], dp[j] + 1);
        }
    }
    for(int i = 1; i <= N; i++) maxi = max(maxi, dp[i]);
    printf("%d\n", N - maxi);
    return 0;
}
