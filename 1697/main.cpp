//
//  main.cpp
//  1697
//
//  Created by songhee on 2021/02/15.
//

#include <iostream>
#include <queue>
#define MAX 100000+1
using namespace std;

int N, K;
int dir[3] = {-1, 1, 0};
int visit[MAX];
int dist[MAX];
queue<int> q;

void bfs(int subin)
{
    visit[subin] = 1;
    dist[subin] = 0;
    q.push(subin);
    int fs = -1;
    while(!q.empty())
    {
        fs = q.front();
        dir[2] = fs;
        q.pop();
        for(int d = 0; d < 3; d++)
        {
            int ds = fs + dir[d];
            if(ds < 0 || MAX <= ds) continue;
            if(!visit[ds])
            {
                visit[ds] = 1;
                dist[ds] = dist[fs] + 1;
                q.push(ds);
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    scanf("%d %d", &N, &K);
    dir[2] = N;
    bfs(N);
    printf("%d\n", dist[K]);
    return 0;
}1697
