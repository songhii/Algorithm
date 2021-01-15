//
//  main.cpp
//  1929
//
//  Created by songhee on 2021/01/15.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int m, n;
    int p[1000001];
    scanf("%d %d", &m, &n);
    fill_n(p, 1000001, 1);
        
    for(int i = m; i <= n; i++)
    {
        for(int j = 2; j * j <= i; j++)
        {
            if(i % j == 0)
            {
                p[i] = 0;
                break;
            }
        }
        if(p[i] == 1 && i > 1)
            printf("%d\n", i);
    }
    
    return 0;
}
