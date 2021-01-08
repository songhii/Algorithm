//
//  main.cpp
//  2869
//
//  Created by songhee on 2021/01/08.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int A, B, V, day;
    scanf("%d %d %d", &A, &B, &V);
    day = (V-B) / (A-B);
    if((V-B) % (A-B) != 0)
        day++;
    printf("%d\n", day);
    return 0;
}
