//
//  main.cpp
//  2739
//
//  Created by songhee on 2020/12/30.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int N;
    cin >> N;
    
    for(int i = 1; i < 10; i++)
        cout << N << " * " << i << " = " << N*i << endl;
    
    return 0;
}
