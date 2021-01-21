//
//  main.cpp
//  2750
//
//  Created by songhee on 2021/01/21.
//

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    int N; scanf("%d", &N);
    vector<int> v;
    for(int i = 0; i < N; i++)
    {
        int n; scanf("%d", &n);
        v.push_back(n);
    }
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N-1; j++)
        {
            if(v[j] > v[j+1])
            {
                int tmp = v[j];
                v[j] = v[j+1];
                v[j+1] = tmp;
            }
        }
    }
    for(int i = 0; i < N; i++)
    {
        printf("%d\n", v[i]);
    }
    return 0;
}
