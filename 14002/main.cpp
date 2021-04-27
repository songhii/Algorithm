//
//  main.cpp
//  14002
//
//  Created by songhee on 2021/04/26.
//

#include <iostream>
#include <algorithm>
#include <vector>
#define MAX 1000
using namespace std;

int N, maxi = -1;
int A[MAX], dp[MAX];
vector<int> list[MAX];
vector<int> answer;

int main(int argc, const char * argv[]) {
    scanf("%d", &N);
    for(int i = 0; i < N; i++) scanf("%d", &A[i]);
    for(int i = 0; i < N; i++)
    {
        dp[i] = 1;
        list[i].push_back(A[i]);
        for(int j = 0; j < i; j++)
        {
            if(A[j] < A[i])
            {
                if(dp[i] < dp[j] + 1)
                {
                    list[i].clear();
                    list[i] = list[j];
                    list[i].push_back(A[i]);
                    dp[i] = dp[j] + 1;
                }
            }
        }
        if(answer.size() < list[i].size())
            answer = list[i];
    }
    printf("%lu\n", answer.size());
    for(int i = 0; i < answer.size(); i++) printf("%d ", answer[i]);
    printf("\n");
    return 0;
}
