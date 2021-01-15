//
//  main.cpp
//  1929_2
//
//  Created by songhee on 2021/01/15.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int p[1000001];
    int m, n;
    scanf("%d %d", &m, &n);
    fill_n(p, 1000001, 1);
    p[0] = 0; p[1] = 0;
    
    for(int i = 2; i <= n; i++)
    {
        if(p[i] == 0) continue;
        for(int j = i + i; j <= n; j+=i)
        {
            p[j] = 0;
        }
    }
    for(int i = m; i <= n; i++)
    {
        if(p[i] == 1) printf("%d\n", i);
    }
    return 0;
}
