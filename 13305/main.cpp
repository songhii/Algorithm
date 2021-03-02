//
//  main.cpp
//  13305
//
//  Created by songhee on 2021/03/02.
//

#include <iostream>
#include <vector>
using namespace std;

long long N, cost = 0, oil = 0, idx = 1, moving = 0;
vector<int> dist, city;

int main(int argc, const char * argv[]) {
    scanf("%lld", &N);
    for(int i = 0; i < N-1; i++)
    {
        int n; scanf("%d", &n);
        dist.push_back(n);
    }
    for(int i = 0; i < N; i++)
    {
        int n; scanf("%d", &n);
        city.push_back(n);
    }
    while(1)
    {
        if(city[oil] <= city[idx])
        {
            moving += dist[idx-1];
            idx++;
        }
        else
        {
            moving += dist[idx-1];
            cost += (moving * city[oil]);
            oil = idx;
            idx++;
            moving = 0;
        }
        if(idx == N-1)
        {
            moving += dist[idx-1];
            cost += (moving * city[oil]);
            break;
        }
    }
    printf("%lld\n", cost);
    return 0;
}
