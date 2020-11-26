//
//  main.cpp
//  10818
//
//  Created by songhee on 2020/11/25.
//

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    int N;
    int min = 1000000, max = -1000000;
    
    cin >> N;
    vector<int> v(N);
    
    for(int i = 0; i < v.size(); i++) {
        cin >> v[i];
    }
    
    for(int i = 0; i < v.size(); i++) {
        if(v[i] > max)
            max = v[i];
        if(v[i] < min)
            min = v[i];
    }
    
    cout << min << " " << max << endl;
    
    return 0;
}
