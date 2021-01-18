//
//  main.cpp
//  1002
//
//  Created by songhee on 2021/01/18.
//

#include <iostream>
#include <cmath>

int main(int argc, const char * argv[]) {
    int T, x1, y1, r1, x2, y2, r2;
    scanf("%d", &T);
    for(int i = 0; i < T; i++)
    {
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
        int d = pow(x1-x2, 2) + pow(y1-y2, 2);
        if(x1 == x2 && y1 == y2)
        {
            if(r1 == r2)
                printf("-1\n");
            else
                printf("0\n");
        }
        else if(d == pow(r1-r2, 2) || d == pow(r1+r2, 2))
            printf("1\n");
        else if(d < pow(r1-r2, 2) || d > pow(r1+r2, 2))
            printf("0\n");
        else if(d < pow(r1+r2, 2))
            printf("2\n");
    }
    return 0;
}
