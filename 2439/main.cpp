//
//  main.cpp
//  2439
//
//  Created by songhee on 2020/11/25.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int N;
    int i, j, k;
    
    cin >> N;
    for(i = 0; i < N; i++) {
        for(j = 0; j < N-i-1 ; j++)
            cout << " ";
        for(k = j; k < N; k++)
            cout << "*";
        cout << endl;
    }
    return 0;
}
