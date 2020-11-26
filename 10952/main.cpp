//
//  main.cpp
//  10952
//
//  Created by songhee on 2020/11/25.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int A = -1, B = -1;
    
    while(1) {
        cin >> A >> B;
        if(A == 0 && B == 0)
            break;
        else cout << A + B << endl;
    }
    return 0;
}
