//
//  main.cpp
//  1005
//
//  Created by songhee on 2021/07/22.
//

#include <iostream>
#include <cstring>
#include <vector>
#include <queue>
#include <algorithm>
#define N_MAX 1000+1
using namespace std;

int T, N, K, W;
int cost[N_MAX], degree[N_MAX], answer[N_MAX];
vector<int> G[N_MAX];
queue<int> Q;

int main(int argc, const char * argv[]) {
    scanf("%d", &T);
    for(int t = 1; t <= T; t++)
    {
        scanf("%d %d", &N, &K);
        
        memset(cost, 0, sizeof(cost));
        memset(degree, 0, sizeof(degree));
        for(int i = 1; i <= N; i++) fill(G[i].begin(), G[i].end(), 0);
        G[0].push_back(0);
        
        for(int n = 1; n <= N; n++) scanf("%d", &cost[n]);
        for(int k = 1; k <= K; k++)
        {
            int n1, n2; scanf("%d %d", &n1, &n2);
            degree[n2]++;
            G[n1].push_back(n2);
        } scanf("%d", &W);
        
        for(int i = 1; i <= N; i++)
        {
            if(degree[i] == 0) Q.push(i);
            answer[i] = cost[i];
        }
        
        for(int i = 1; i <= N; i++)
        {
            if(Q.empty()) return 0;
            
            int front = Q.front();
            Q.pop();
            
            for(int j = 0; j < G[front].size(); j++)
            {
                int next = G[front][j];
                answer[next] = max(answer[next], answer[front] + cost[next]);
                if(--degree[next] == 0) Q.push(next);
            }
        }
        printf("%d\n", answer[W]);
    }
    return 0;
}
