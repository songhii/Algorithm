//
//  main.cpp
//  1712
//
//  Created by songhee on 2021/01/07.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int A, B, C, i;
    cin >> A >> B >> C;
    if(B >= C)
    {
        cout << -1 << endl;
        return 0;
    }
    i = A / (C-B) + 1;
    cout << i << endl;
    
    return 0;
}
