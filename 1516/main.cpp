//
//  main.cpp
//  1516
//
//  Created by songhee on 2021/07/02.
//

#include <iostream>
#include <vector>
#include <queue>
#define N_MAX 500+1
using namespace std;

int N, degree[N_MAX], ans[N_MAX], T[N_MAX];
vector<int> G[N_MAX];
queue<int> Q;

int main(int argc, const char * argv[]) {
    scanf("%d", &N);
    for(int i = 0; i <= N; i++) G[i].push_back(0);
    
    for(int i = 1; i <= N; i++)
    {
        scanf("%d", &T[i]);
        while(1)
        {
            int before;
            scanf("%d", &before);
            if(before == -1) break;
            G[before].push_back(i);
            degree[i]++;
        }
    }
    
    for(int i = 1; i <= N; i++)
        if(degree[i] == 0)
        {
            ans[i] = T[i];
            Q.push(i);
        }
    
    for(int i = 1; i <= N; i++)
    {
        int front = Q.front();
        Q.pop();
        
        for(int j = 1; j < G[front].size(); j++)
        {
            int next = G[front][j];
            ans[next] = max(ans[next], T[next] + ans[front]);
            if(--degree[next] == 0) Q.push(next);
        }
    }
    
    for(int i = 1; i <= N; i++) printf("%d\n", ans[i]);
    
    return 0;
}
