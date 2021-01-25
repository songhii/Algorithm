//
//  main.cpp
//  11650
//
//  Created by songhee on 2021/01/25.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    int N; scanf("%d", &N);
    vector<pair<int, int>> v;
    for(int i = 0; i < N; i++)
    {
        int x, y; scanf("%d %d", &x, &y);
        v.push_back({x, y});
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < N; i++)
    {
        printf("%d %d\n", v[i].first, v[i].second);
    }
    return 0;
}
