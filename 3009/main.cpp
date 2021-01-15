//
//  main.cpp
//  3009
//
//  Created by songhee on 2021/01/15.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int x1, x2, x3, y1, y2, y3;
    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);
    scanf("%d %d", &x3, &y3);
    
    if(x1 == x2)
        printf("%d ", x3);
    else if(x1 == x3)
        printf("%d ", x2);
    else
        printf("%d ", x1);
    
    if(y1 == y2)
        printf("%d\n", y3);
    else if(y1 == y3)
        printf("%d\n", y2);
    else
        printf("%d\n", y1);
    
    return 0;
}
g
