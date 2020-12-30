//
//  main.cpp
//  2742
//
//  Created by songhee on 2020/12/30.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int N;
    cin >> N;
    
    for(int i = N; i >= 1; i--)
        cout << i << "\n";
    
    return 0;
}
