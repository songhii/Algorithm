//
//  main.cpp
//  1011
//
//  Created by songhee on 2021/01/13.
//

#include <iostream>
#include <cmath>

int main(int argc, const char * argv[]) {
    int T;
    double x, y, cnt = 0;
    scanf("%d", &T);
    for(int i = 0; i < T; i++)
    {
        scanf("%lf %lf", &x, &y);
        cnt = 2 * sqrt(y-x) - 1;
        cnt = ceil(cnt);
        printf("%.0lf\n", cnt);
    }
    return 0;
}
