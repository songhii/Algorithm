//
//  main.cpp
//  11021
//
//  Created by songhee on 2020/12/30.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int T, A, B;
    cin >> T;
    
    for(int i = 0; i < T; i++)
    {
        cin >> A >> B;
        cout << "Case #" << i+1 << ": " << A+B << "\n";
    }
    return 0;
}
