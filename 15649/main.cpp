//
//  main.cpp
//  15649
//
//  Created by songhee on 2021/01/27.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;
int *arr;
vector<int> v;

void back(int x, int y, int len)
{
    if(x >= N) return;
    if(len == M)
    {
        for(int i = 0; i < v.size(); i++)
        {
            if(count(v.begin(), v.end(), v[i]) >= 2)
            {
                v.pop_back();
                return;
            }
        }
        
        for(int i = 0; i < v.size(); i++)
            printf("%d ", v[i]);
        printf("\n");
        
        v.pop_back();
        return;
    }
    for(int i = 0; i < N; i++)
    {
        v.push_back(arr[i]);
        back(x, i, len+1);
    }
    v.pop_back();
}

int main(int argc, const char * argv[]) {
    scanf("%d %d", &N, &M);
    arr = new int[N];
    for(int i = 0; i < N; i++)
        arr[i] = i+1;
    
    for(int x = 0; x < N; x++)
    {
        v.push_back(arr[x]);
        back(x, 0, 1);
    }
    delete arr;
    return 0;
}
