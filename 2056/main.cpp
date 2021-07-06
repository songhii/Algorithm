//
//  main.cpp
//  2056
//
//  Created by songhee on 2021/07/06.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#define MAX 10000+1
using namespace std;

int N, K, RES, T[MAX], D[MAX], ANS[MAX];
vector<int> G[MAX];
queue<int> Q;

int main(int argc, const char * argv[]) {
    scanf("%d", &N);
    G[0].push_back(0);
    for(int i = 1; i <= N; i++)
    {
        int before;
        scanf("%d %d", &T[i], &K);
        for(int j = 1; j <= K; j++)
        {
            scanf("%d", &before);
            D[i]++;
            G[before].push_back(i);
        }
    }
    
    for(int i = 1; i <= N; i++)
    {
        if(D[i] == 0)
        {
            Q.push(i);
            ANS[i] = T[i];
        }
    }
    
    for(int i = 1; i <= N; i++)
    {
        int front = Q.front();
        Q.pop();
        
        for(int j = 0; j < G[front].size(); j++)
        {
            int next = G[front][j];
            ANS[next] = max(ANS[next], T[next] + ANS[front]);
            if(--D[next] == 0) Q.push(next);
            
        }
    }
    for(int i = 1; i <= N; i++) RES = max(RES, ANS[i]);
    printf("%d\n", RES);
    return 0;
}
