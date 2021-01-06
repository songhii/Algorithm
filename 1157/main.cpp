//
//  main.cpp
//  1157
//
//  Created by songhee on 2021/01/06.
//

#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]) {
    string s = "";
    int check[26];
    fill_n(check, 26, 0);
    int max = -1, maxidx = -1, maxcnt = 0;
    
    cin >> s;
    for(int i = 0; i < s.length(); i++)
    {
        if(65 <= s.at(i) && s.at(i)<= 90) // 대문자 입력
        {
            check[s.at(i)-65]++;
        }
        else if(97 <= s.at(i)) // 소문자 입력
        {
            check[s.at(i)-97]++;
        }
    }
    
    for(int i = 0; i < 26; i++)
    {
        if(check[i] > max)
        {
            max = check[i];
            maxidx = i;
        }
    }
    for(int i = 0; i < 26; i++)
    {
        if(maxcnt >= 2)
        {
            cout << "?" << endl;
            return 0;
        }
        if(check[i] == max)
            maxcnt++;
    }
    printf("%c\n", maxidx+65);
    return 0;
}
