//
//  main.cpp
//  14681
//
//  Created by songhee on 2020/11/25.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int x, y;
    
    cin >> x >> y;
    
    if(x > 0 && y > 0)
        cout << 1;
    else if(x < 0 && y > 0)
        cout << 2;
    else if(x < 0 && y < 0)
        cout << 3;
    else
        cout << 4;
    cout << endl;
    return 0;
}
