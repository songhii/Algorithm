//
//  main.cpp
//  1546
//
//  Created by songhee on 2020/12/30.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int N, M = 0;
    double sum = 0;
    
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        int tmp;
        cin >> tmp;
        if(tmp > M)
            M = tmp;
        sum += tmp;
    }
    printf("%.9lf\n", (sum/N)/M*100);
    
    return 0;
}
