//
//  main.cpp
//  1766
//
//  Created by songhee on 2021/07/02.
//

#include <iostream>
#include <queue>
#include <vector>
#define N_MAX 32000+1
using namespace std;

int N, M, degree[N_MAX], ans[N_MAX];
vector<int> G[N_MAX];
priority_queue<int, vector<int>, greater<int>> Q;

int main(int argc, const char * argv[]) {
    scanf("%d %d", &N, &M);
    for(int i = 1; i <= M; i++)
    {
        int A, B;
        scanf("%d %d", &A, &B);
        G[A].push_back(B);
        degree[B]++;
    }
    
    for(int i = 1; i <= N; i++)
        if(degree[i] == 0) Q.push(i);
    
    for(int i = 1; i <= N; i++)
    {
        int front = Q.top();
        Q.pop();
        ans[i] = front;
        
        for(int j = 0; j < G[front].size(); j++)
        {
            int next = G[front][j];
            if(--degree[next] == 0) Q.push(next);
        }
    }
    
    for(int i = 1; i <= N; i++) printf("%d ", ans[i]);
    printf("\n");
    return 0;
}
