//
//  main.cpp
//  11721
//
//  Created by songhee on 2021/08/10.
//

#include <iostream>
#include <string>
using namespace std;

string s;

int main(int argc, const char * argv[]) {
    cin >> s;
    
    int idx = 0;
    for(int i = 0; i < s.length(); i++) {
        while(1) {
            int check = idx - i + 1;
            if(check == 10) {
                if(idx == s.length()) idx--;
                break;
            }
            idx++;
        }
        for(int j = i; j <= idx; j++) {
            if(s[j] == NULL) continue;
            cout << s[j];
        }
        printf("\n");
        i = idx;
    }
    return 0;
}
