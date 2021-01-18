//
//  main.cpp
//  1436
//
//  Created by songhee on 2021/01/18.
//

#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]) {
    int N, S = 0, number = 0; scanf("%d", &N);
    while(1)
    {
        if(N == S) break;
        if(to_string(number).find("666") != string::npos)
            S++;
        number++;
    }
    printf("%d\n", number-1);
}
