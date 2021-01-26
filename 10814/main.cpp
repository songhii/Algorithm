//
//  main.cpp
//  10814
//
//  Created by songhee on 2021/01/26.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;

bool comp(pair<int, string> v1, pair<int, string> v2)
{
    return v1.first < v2.first;
}

int main(int argc, const char * argv[]) {
    int N; scanf("%d", &N);
    vector<pair<int, string>> v;
    for(int i = 0; i < N; i++)
    {
        int age; string name;
        cin >> age >> name;
        v.push_back({age, name});
    }
    stable_sort(v.begin(), v.end(), comp);
    
    
    for(int i = 0; i < N; i++)
    {
        printf("%d %s\n", v[i].first, v[i].second.c_str());
    }
    return 0;
}
