//
//  main.cpp
//  2675
//
//  Created by songhee on 2021/01/06.
//

#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]) {
    int T, R;
    
    cin >> T;
    for(int i = 0; i < T; i++)
    {
        string S = "";
        cin >> R;
        cin >> S;
        for(int j = 0; j < S.length(); j++)
        {
            for(int k = 0; k < R; k++)
                cout << S.at(j);
        }
        cout << endl;
    }
    return 0;
}
