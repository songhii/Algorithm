//
//  main.cpp
//  10871
//
//  Created by songhee on 2020/11/25.
//

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    int N;
    int X;
    
    cin >> N >> X;
    vector<int> v(N);
    
    for(int i = 0; i < v.size(); i++) {
        cin >> v[i];
    }
    for(int i = 0; i < v.size(); i++) {
        if(v[i] < X)
            cout << v[i] << " ";
    }
    cout << endl;
    
    return 0;
}
