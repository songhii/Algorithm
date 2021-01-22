//
//  main.cpp
//  2751
//
//  Created by songhee on 2021/01/22.
//

#include <iostream>
#include <algorithm>
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

    sort(v.begin(), v.end());
    
    for(int i = 0; i < N; i++)
        printf("%d\n", v[i]);
    
    return 0;
}
