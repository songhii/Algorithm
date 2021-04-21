//
//  main.cpp
//  1699
//
//  Created by songhee on 2021/04/21.
//

#include <iostream>
#include <algorithm>
#define MAX 100000+1
using namespace std;

int N;
long dp[MAX] = {0, 1, 2, 3, };

long power(long n)
{
    return n * n;
}

int main(int argc, const char * argv[]) {
    scanf("%d", &N);
    for(int i = 4; i <= N; i++)
    {
        dp[i] = i;
        for(int j = i/2; j > 0; j--)
        {
            if(power(j) <= i)
            {
                dp[i] = min(dp[i], dp[i - power(j)] + 1);
            }
        }
    }
    printf("%ld\n", dp[N]);
    return 0;
}
