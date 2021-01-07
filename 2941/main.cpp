//
//  main.cpp
//  2941
//
//  Created by songhee on 2021/01/06.
//

#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]) {
    int cnt = 0;
    string s = "";
    string t[8] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    cin >> s;
    
    int i;
    for(i = 0; i < s.length(); i++)
    {
        if(i < s.length()-1)
        {
            string tmp = "";
            bool check = false;
            bool three = false;
            tmp += s[i];
            tmp += s[i+1];
            if(s[i] == 'd' && s[i+1] == 'z' && i+2 < s.length())
            {
                tmp += s[i+2];
                three = true;
            }
            for(int j = 0; j < 8; j++)
            {
                if(tmp == t[j])
                {
                    check = true;
                    break;
                }
            }
            cnt++;
            if(check)
            {
                if(three)
                    i += 2;
                else
                    i += 1;
            }
        }
        else
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}
