//
//  main.cpp
//  7562
//
//  Created by songhee on 2021/02/18.
//

#include <iostream>
#include <queue>
#define MAX 300
using namespace std;

int T, l, sx, sy, ex, ey;
int dir_x[8] = {-2, -2, -1, -1, 2, 2, 1, 1};
int dir_y[8] = {-1, 1, -2, 2, -1, 1, -2, 2};
int chess[MAX][MAX];
queue<pair<int, int>> q;

int bfs(int sx, int sy)
{
    q.push({sx, sy});
    chess[sx][sy] = 0;
    while(!q.empty())
    {
        int fx = q.front().first, fy = q.front().second;
        if(fx == ex && fy == ey) return chess[fx][fy];
        q.pop();
        for(int dir = 0; dir < 8; dir++)
        {
            int dx = fx + dir_x[dir], dy = fy + dir_y[dir];
            if(dx < 0 || l <= dx || dy < 0 || l <= dy || chess[dx][dy] > 0) continue;
            q.push({dx, dy});
            chess[dx][dy] = chess[fx][fy] + 1;
        }
    }
    return 0;
}

int main(int argc, const char * argv[]) {
    scanf("%d", &T);
    for(int test = 0; test < T; test++)
    {
        fill_n(&chess[0][0], MAX * MAX, 0);
        while(!q.empty()) q.pop();
        scanf("%d", &l); scanf("%d %d", &sx, &sy); scanf("%d %d", &ex, &ey);
        printf("%d\n", bfs(sx, sy));
    }
    return 0;
}
