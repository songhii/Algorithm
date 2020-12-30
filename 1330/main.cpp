//
//  main.cpp
//  1330
//
//  Created by songhee on 2020/12/30.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int A, B;
    cin >> A >> B;
    
    if(A > B)
    {
        cout << ">" << endl;
    }
    else if(A < B)
    {
        cout << "<" << endl;
    }
    else
    {
        cout << "==" << endl;
    }
    return 0;
}
