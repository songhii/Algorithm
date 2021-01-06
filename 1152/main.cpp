//
//  main.cpp
//  1152
//
//  Created by songhee on 2021/01/06.
//

#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]) {
    int cnt = 0;
    bool word = false;
    string s;
    getline(cin, s);
    
    for(int i = 0; i < s.length(); i++)
    {
        if(word && s.at(i) == ' ')
            cnt++;
        if(s.at(i) == ' ')
            word = false;
        else word = true;
    }
    if(word) cnt++;
    cout << cnt << endl;
    return 0;
}
