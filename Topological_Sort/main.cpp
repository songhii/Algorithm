//
//  main.cpp
//  Topological_Sort
//
//  Created by songhee on 2021/07/02.
//

#include <iostream>
#include <queue>
#include <vector>
#define MAX 10
using namespace std;

int N, K, ans[MAX], degree[MAX];
vector<int> G[MAX];
queue<int> Q;

int main(int argc, const char * argv[]) {
    scanf("%d %d", &N, &K);
    for(int i = 1; i <= N; i++)
    {
        int n1, n2; scanf("%d %d", &n1, &n2);
        G[n1].push_back(n2);
        degree[n2]++;
    }
    
    for(int i = 1; i <= N; i++)
        if(degree[i] == 0) Q.push(i);
    
    for(int i = 1; i <= N; i++)
    {
        if(Q.empty())
        {
            printf("CYCLE 발생\n");
            return 0;
        }
        
        int front = Q.front();
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
