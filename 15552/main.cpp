//
//  main.cpp
//  15552
//
//  Created by songhee on 2020/12/30.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int T, A, B;
    cin >> T;
    
    for(int i = 0; i < T; i++)
    {
        cin >> A >> B;
        cout << A+B << "\n";
    }
    return 0;
}
