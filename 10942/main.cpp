//
//  main.cpp
//  10942
//
//  Created by songhee on 2021/07/19.
//

#include <iostream>
#include <cstring>
#define MAX 2000+1
using namespace std;

int N, M, S, E, pal;
int arr[MAX], dp[MAX][MAX];

int main(int argc, const char * argv[]) {
    scanf("%d", &N);
    for(int i = 1; i <= N; i++) scanf("%d", &arr[i]);
    scanf("%d", &M);
    
    memset(dp, -1, sizeof(dp));
    // 수열 길이가 1일 때 항상 팰린드롬
    for(int i = 1; i <= N; i++)
        dp[i][i] = 1;
    // 수열 길이가 2일 때 두 수끼리 같으면 팰린드롬
    for(int i = 1; i <= N; i++)
    {
        if(arr[i] == arr[i+1]) dp[i][i+1] = 1;
        else dp[i][i+1] = 0;
    }
       
    //수열 길이가 3일 때는 (S+1) ~ (E-1) 사이가 팰린드롬 && 시작 수 == 끝 수 조건 만족해야 팰린드롬
    for(int i = 2; i <= N-1; i++) // 수열 길이
    {
        for(int j = 1; j <= N-i; j++) // 시작점
        {
            int k = i + j; // 종료점
            if(dp[j][k] != -1) continue;
            if(arr[j] != arr[k]) // 시작점과 종료점이 다르면 팰린드롬이 아님
            {
                dp[j][k] = 0;
                continue;
            }
            // 시작점과 종료점 사이가 팰린드롬인지 검사
            if(dp[j+1][k-1]) dp[j][k] = 1;
            else dp[j][k] = 0;
        }
    }
    
    // dp[S][E] = S ~ E 사이 수열이 팰린드롬인가?
    for(int m = 1; m <= M; m++)
    {
        scanf("%d %d", &S, &E);
        printf("%d\n", dp[S][E]);
    }
    return 0;
}
