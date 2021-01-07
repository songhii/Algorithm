//
//  main.cpp
//  1316_2
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
        string s = "";
        cin >> s;
        word[s[0]-97]++;
        for(int j = 1; j < s.length(); j++)
        {
            if(s[j-1] != s[j]) word[s[j]-97]++;
            if(word[s[j]-97] > 1)
            {
                cnt--;
                break;
            }
        }
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}
