//
//  main.cpp
//  13305_2
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
    while(idx < N)
    {
        if(city[oil] > city[idx] || idx == N-1)
        {
            for(long long i = oil; i < idx; i++) moving += dist[i];
            cost += (moving * city[oil]);
            oil = (idx++);
            moving = 0;
        }
        else idx++;
    }
    printf("%lld\n", cost);
    return 0;
}
