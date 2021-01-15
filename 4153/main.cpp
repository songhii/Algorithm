//
//  main.cpp
//  4153
//
//  Created by songhee on 2021/01/15.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    while(1)
    {
        vector<int> v;
        for(int i=0; i<3; i++)
        {
            int n; scanf("%d", &n);
            v.push_back(n);
        }
        if(!v[0]) break;
        
        sort(v.begin(), v.end());
        if(v[0]*v[0] + v[1]*v[1] == v[2]*v[2])
            printf("right\n");
        else printf("wrong\n");
    }
    return 0;
}
