//
//  main.cpp
//  3053
//
//  Created by songhee on 2021/01/18.
//

#include <iostream>
#include <cmath>

int main(int argc, const char * argv[]) {
    double R; scanf("%lf", &R);
    printf("%lf\n", R * R * 3.141592653589793238462643383279502884197169399375105820974944);
    printf("%lf\n", pow(R*2, 2) / 2);
    return 0;
}
