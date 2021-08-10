//
//  main.cpp
//  1009
//
//  Created by songhee on 2021/08/10.
//

#include <iostream>
#include <cmath>
using namespace std;

int T, a, b, c, idx;

int main(int argc, const char * argv[]) {
    scanf("%d", &T);
    for(int t = 0; t < T; t++) {
        scanf("%d %d", &a, &b);
        switch(a % 10) {
            case 1:
                idx = 1;
                break;
            case 4:
                idx = 2;
                break;
            case 5:
                idx = 1;
                break;
            case 6:
                idx = 1;
                break;
            case 9:
                idx = 2;
                break;
            case 0:
                printf("10\n");
                continue;
            default:
                idx = 4;
                break;
        }
    
        if(b % idx != 0) c = b % idx;
        else c = idx;
        int data = pow(a, c);
        printf("%d\n", data % 10);
    }
    return 0;
}
