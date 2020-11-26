//
//  main.cpp
//  2753
//
//  Created by songhee on 2020/11/25.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int year;
    
    cin >> year;
    
    if(year % 4 == 0 && year % 100 != 0)
        cout << 1 << endl;
    else if(year % 400 == 0)
        cout << 1 << endl;
    else
        cout << 0 << endl;
    
    return 0;
}
