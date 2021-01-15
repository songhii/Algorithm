//
//  main.cpp
//  1085
//
//  Created by songhee on 2021/01/15.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int move = 0, x, y, w, h;
    scanf("%d %d %d %d", &x, &y, &w, &h);
    int x1, x2, y1, y2;
    x1 = x2 = x;
    y1 = y2 = y;
    
    while(1)
    {
        if(x1 == 0 || x2 == w || y1 == 0 || y2 == h) break;
        x1--; x2++;
        y1--; y2++;
        move++;
    }
    printf("%d\n", move);
    return 0;
}
