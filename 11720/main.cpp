//
//  main.cpp
//  11720
//
//  Created by songhee on 2021/01/05.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    char *c;
    int N, sum = 0;
    scanf("%d", &N);
    
    c = new char[N+1];
    scanf("%s", c);
    for(int i = 0; i < N; i++)
    {
        sum += (c[i]-48);
    }
    delete c;
    printf("%d\n", sum);
    return 0;
}
