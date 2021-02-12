//
//  main.cpp
//  2178
//
//  Created by songhee on 2021/02/12.
//

#include <iostream>
#include <queue>
#define MAX 100+1
using namespace std;

int N, M;
int dir_x[4] = {0, 0, -1, 1};
int dir_y[4] = {-1, 1, 0, 0};
int miro[MAX][MAX];
int dist[MAX][MAX];
int visit[MAX][MAX];
queue<pair<int, int>> q;

void bfs(int i, int j)
{
    q.push({i, j});
    dist[i][j] = 1;
    visit[i][j] = 1;
    while(!q.empty())
    {
        int fx = q.front().first, fy = q.front().second;
        q.pop();
        for(int i = 0; i < 4; i++)
        {
            int dx = fx + dir_x[i], dy = fy + dir_y[i];
            if(dx < 0 || N+1 <= dx || dy < 0 || M+1 <= dy) continue;
            if(miro[dx][dy] && !visit[dx][dy])
            {
                q.push({dx, dy});
                visit[dx][dy] = 1;
                dist[dx][dy] = dist[fx][fy] + 1;
            }
        }
        
    }
}

int main(int argc, const char * argv[]) {
    scanf("%d %d", &N, &M);
    for(int i = 1; i <= N; i++) for(int j = 1; j <= M; j++) scanf("%1d", &miro[i][j]);
    bfs(1, 1);
    printf("%d\n", dist[N][M]);
    return 0;
}
