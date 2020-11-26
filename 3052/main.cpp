//
//  main.cpp
//  3052
//
//  Created by songhee on 2020/11/25.
//

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    int count = 0;
    vector<int> input(10);
    vector<int> check(10, -10);
    
    for(int i = 0; i < input.size(); i++) {
        cin >> input[i];
    }
    for(int i = 0; i < input.size(); i++) {
        input[i] %= 42;
    }
    
    bool insert = true;
    int ch = 0;
    for(int i = 0; i < input.size(); i++) {
        insert = true;
        for(int j = 0; j < ch+1; j++) {
            if(input[i] == check[j]) {
                insert = false;
                break;
            }
        }
        if(insert == true) {
            check[ch++] = input[i];
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
