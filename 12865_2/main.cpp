//
//  main.cpp
//  12865_2
//
//  Created by songhee on 2021/04/06.
//

#include <iostream>
#include <algorithm>
using namespace std;

int N, K;
int W[101], V[101], dp[100001];

int main(int argc, const char * argv[]) {
    scanf("%d %d", &N, &K);
    for(int n = 1; n <= N; n++) scanf("%d %d", &W[n], &V[n]);
    
    for(int i = 1; i <= N; i++)
    {
        for(int j = K; j >= 1; j--)
        {
            if(j-W[i] >= 0) dp[j] = max(dp[j], dp[j-W[i]]+V[i]);
        }
    }
    printf("%d\n", dp[K]);
    return 0;
}
