//
//  main.cpp
//  12852
//
//  Created by songhee on 2021/05/03.
//

#include <iostream>
#define MAX 1000000+1
using namespace std;

int N;
int dp[MAX], list[MAX];

int main(int argc, const char * argv[]) {
    scanf("%d", &N);
    list[1] = -1;
    for(int i = 2; i <= N; i++)
    {
        dp[i] = dp[i-1] + 1;
        list[i] = i-1;
        if(i % 3 == 0 && dp[i] > dp[i/3] + 1)
        {
            dp[i] = dp[i/3] + 1;
            list[i] = i/3;
            
        }
        else if(i % 2 == 0 && dp[i] > dp[i/2] + 1)
        {
            dp[i] = dp[i/2] + 1;
            list[i] = i/2;
        }
    }
    printf("%d\n", dp[N]);
    while(N != -1)
    {
        printf("%d ", N);
        N = list[N];
    }
    printf("\n");
    return 0;
}
