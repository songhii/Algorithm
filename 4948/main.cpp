//
//  main.cpp
//  4948
//
//  Created by songhee on 2021/01/15.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int p[246913];
    fill_n(p, 246913, 1);
    p[0] = 0; p[1] = 0;
    int n;
    
    while(1)
    {
        scanf("%d", &n);
        if(n == 0) return 0;
        for(int i = 2; i <= 2*n; i++)
        {
            if(p[i] == 0) continue;
            for(int j = i+i; j <= 2*n; j+=i)
            {
                p[j] = 0;
            }
        }
        int sum = 0;
        for(int i = n+1; i <= 2*n; i++)
        {
            if(p[i] == 1) sum++;
        }
        printf("%d\n", sum);
    }
    
    return 0;
}
