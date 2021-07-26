//
//  main.cpp
//  1915
//
//  Created by songhee on 2021/07/26.
//

#include <iostream>
#include <string>
#define MAX 1000
using namespace std;

string input;
int N, M, maxi = -1;
int A[MAX][MAX], dp[MAX][MAX];

int main(int argc, const char * argv[]) {
    scanf("%d %d", &N, &M);
    for(int i = 0; i < N; i++)
    {
        input = "";
        cin >> input;
        for(int j = 0; j < M; j++)
        {
            A[i][j] = input[j] - '0';
            if(i == 0 || j == 0) dp[i][j] = A[i][j];
        }
    }
    
    if(N == 1 && N == M)
    {
        if(A[0][0]) maxi = 1;
        else maxi = 0;
        printf("%d\n", maxi * maxi);
        return 0;
    }
    
    for(int i = 1; i < N; i++)
    {
        for(int j = 1; j < M; j++)
        {
            if(!A[i][j]) continue;
            int mini = dp[i-1][j-1];
            mini = min(mini, dp[i-1][j]);
            mini = min(mini, dp[i][j-1]);
            dp[i][j] = mini + 1;
        }
    }
    for(int i = 0; i < N; i++)
        for(int j = 0; j < M; j++) maxi = max(maxi, dp[i][j]);
    
    if(maxi != -1) printf("%d\n", maxi * maxi);
    else printf("0\n");
    return 0;
}
