//
//  main.cpp
//  11651
//
//  Created by songhee on 2021/01/25.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, int> v1, pair<int, int> v2)
{
    if(v1.second == v2.second)
        return v1.first < v2.first;
    return v1.second < v2.second;
}

int main(int argc, const char * argv[]) {
    int N; scanf("%d", &N);
    vector<pair<int, int>> v;
    for(int i = 0; i < N; i++)
    {
        int x, y; scanf("%d %d", &x, &y);
        v.push_back({x, y});
    }
    sort(v.begin(), v.end(), compare);
    for(int i = 0; i < N; i++)
    {
        printf("%d %d\n", v[i].first, v[i].second);
    }
    return 0;
}
