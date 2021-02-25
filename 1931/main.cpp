//
//  main.cpp
//  1931
//
//  Created by songhee on 2021/02/25.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, conf = 1;
vector<pair<int, int>> I;

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if(p1.second == p2.second) return p1.first < p2.first;
    else return p1.second < p2.second;
}

int main(int argc, const char * argv[]) {
    scanf("%d", &N);
    for(int i = 0; i < N; i++)
    {
        int n1, n2; scanf("%d %d", &n1, &n2);
        I.push_back({n1, n2});
    }
    sort(I.begin(), I.end(), comp);
    int start, end = I.at(0).second;
    for(int i = 1; i < N; i++)
    {
        start = I.at(i).first;
        if(end <= start)
        {
            conf++;
            end = I.at(i).second;
        }
    }
    printf("%d\n", conf);
    return 0;
}
