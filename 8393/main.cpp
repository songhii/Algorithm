//
//  main.cpp
//  8393
//
//  Created by songhee on 2020/12/30.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int N, sum = 0;
    cin >> N;
    
    for(int i = 1; i <= N; i++)
        sum += i;
    cout << sum << endl;
    
    return 0;
}
