//
//  main.cpp
//  2667_BFS
//
//  Created by songhee on 2021/02/11.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#define MAX 25
using namespace std;

int N, complex_number = 1, house_number = 0;
int map[MAX][MAX];
queue<pair<int, int>> q;
vector<int> complex;
vector<pair<int, int>> dir;

void bfs(int i, int j)
{
    
    if(map[i][j] == 0) return;
    map[i][j] = complex_number;
    house_number++;
    q.push({i, j});
    while(!q.empty())
    {
        int fx = q.front().first, fy = q.front().second;
        q.pop();
        for(int k = 0; k < 4; k++)
        {
            int dx = fx + dir[k].first, dy = fy + dir[k].second;
            if(N <= dx || dx < 0 || N <= dy || dy < 0) continue;
            if(map[dx][dy] == 1)
            {
                map[dx][dy] = complex_number;
                house_number++;
                q.push({dx, dy});
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    scanf("%d", &N);
    dir.push_back({0, -1}); dir.push_back({0, 1}); dir.push_back({-1, 0}); dir.push_back({1, 0});
    for(int i = 0; i < N; i++) for(int j = 0; j < N; j++) scanf("%1d", &map[i][j]);
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(map[i][j] == 1)
            {
                house_number = 0;
                complex_number++;
                bfs(i, j);
                complex.push_back(house_number);
            }
        }
    }
    printf("%d\n", complex_number-1);
    sort(complex.begin(), complex.end());
    for(int i = 0; i < complex.size(); i++) printf("%d\n", complex[i]);
    return 0;
}
