//
//  main.cpp
//  2562
//
//  Created by songhee on 2020/11/25.
//

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    int max = -1;
    int order;
    vector<int> v(9);
    
    for(int i = 0; i < v.size(); i++) {
        cin >> v[i];
    }
    
    for(int i = 0; i < v.size(); i++) {
        if(v[i] > max) {
            max = v[i];
            order = i + 1;
        }
    }
    
    cout << max << "\n" << order << endl;
    
    return 0;
}
