//
//  main.cpp
//  2667_DFS
//
//  Created by songhee on 2021/02/10.
//

#include <iostream>
#include <algorithm>
#include <vector>
#define MAX 25
using namespace std;

int N, complex_number = 1, house_number = 1;
int map[MAX][MAX];
vector<int> complex;
vector<int> graph[MAX];
vector<pair<int, int>> dir;

void dfs(int i, int j)
{
    if(map[i][j] == 0) return;
    map[i][j] = complex_number;
    for(int k = 0; k < 4; k++)
    {
        int dx = i + dir[k].first, dy = j + dir[k].second;
        if(N <= dx || dx < 0 || N <= dy || dy < 0) continue;
        if(map[dx][dy] == 1)
        {
            house_number++;
            dfs(dx, dy);
        }
    }
}

int main(int argc, const char * argv[]) {
    scanf("%d", &N);
    dir.push_back({0, -1}); dir.push_back({0, 1}); dir.push_back({-1, 0}); dir.push_back({1, 0});
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            scanf("%1d", &map[i][j]);
            if(map[i][j]) graph[i].push_back(j);
        }
    }
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(map[i][j] == 1)
            {
                house_number = 1;
                complex_number++;
                dfs(i, j);
                complex.push_back(house_number);
            }
        }
    }
    printf("%d\n", complex_number-1);
    sort(complex.begin(), complex.end());
    for(int i = 0; i < complex.size(); i++) printf("%d\n", complex[i]);
    return 0;
}
