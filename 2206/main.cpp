//
//  main.cpp
//  2206
//
//  Created by songhee on 2021/02/16.
//

#include <iostream>
#include <queue>
#define MAX 1000+1
using namespace std;

int N, M;
int dir_x[4] = {-1, 0, 1, 0};
int dir_y[4] = {0, 1, 0, -1};
int map[MAX][MAX];
int visit[MAX][MAX][2];
queue<pair<pair<int, int>, int>> q;

int bfs(int x, int y, int b)
{
    q.push({{x, y}, b});
    visit[x][y][b] = 1;
    while(!q.empty())
    {
        pair<pair<int, int>, int> tmp = q.front();
        int fx = tmp.first.first, fy = tmp.first.second, fb = tmp.second;
        q.pop();
        if(fx == N && fy == M) return visit[fx][fy][fb];
        for(int dir = 0; dir < 4; dir++)
        {
            int dx = fx + dir_x[dir], dy = fy + dir_y[dir];
            if(dx < 1 || N+1 <= dx || dy < 1 || M+1 <= dy || visit[dx][dy][fb]) continue;
            if(map[dx][dy] && fb)
            {
                q.push({{dx, dy}, 0});
                visit[dx][dy][0] = visit[fx][fy][fb] + 1;
            }
            if(!map[dx][dy])
            {
                q.push({{dx, dy}, fb});
                visit[dx][dy][fb] = visit[fx][fy][fb] + 1;
            }
        }
    }
    return -1;
}

int main(int argc, const char * argv[]) {
    scanf("%d %d", &N, &M);
    for(int i = 1; i <= N; i++) for(int j = 1; j <= M; j++) scanf("%1d", &map[i][j]);
    printf("%d\n", bfs(1, 1, 1));
    return 0;
}
