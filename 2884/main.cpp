//
//  main.cpp
//  2884
//
//  Created by songhee on 2020/11/25.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int h, m;
    cin >> h >> m;
    
    if(m < 45) {
        m += 15;
        if(h > 0)
            h--;
        else
            h += 23;
    }
    else
        m -= 45;
    
    cout << h << " " << m << endl;
    return 0;
}
