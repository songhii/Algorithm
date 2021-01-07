//
//  main.cpp
//  1316
//
//  Created by songhee on 2021/01/07.
//

#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]) {
    int N, cnt = 0;
    int word[26];
    
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        fill_n(word, 26, 0);
        bool group = true;
        string s = "";
        cin >> s;
        for(int j = 0; j < s.length(); j++)
        {
            int num = 1;
            if(word[s[j]-97] > 0)
            {
                group = false;
                break;
            }
            while(1)
            {
                if(j < s.length()-1 && s[j] != s[j+1])
                {
                    word[s[j]-97] = num;
                    break;
                }
                if(j >= s.length()-1)
                {
                    if(word[s[j]-97] > 0)
                    {
                        group = false;
                    }
                    word[s[j]-97]++;
                    break;
                }
                num++;
                j++;
            }
        }
        if(group)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}
