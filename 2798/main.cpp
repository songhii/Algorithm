//
//  main.cpp
//  2798
//
//  Created by songhee on 2021/01/18.
//

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    int N, M; scanf("%d %d", &N, &M);
    vector<int> v;
    for(int i = 0; i < N; i++)
    {
        int n; scanf("%d", &n);
        v.push_back(n);
    }
    int max = -1;
    for(int i = v.size()-1; i >= 2; i--)
    {
        for(int j = i-1; j >= 1; j--)
        {
            for(int k = j-1; k >= 0 ; k--)
            {
                if(max < v[i]+v[j]+v[k] && v[i]+v[j]+v[k] <= M)
                    max = v[i]+v[j]+v[k];
                if(max == M)
                {
                    printf("%d\n", max);
                    return 0;
                }
            }
        }
    }
    printf("%d\n", max);
    return 0;
}
