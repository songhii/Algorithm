//
//  main.cpp
//  9935
//
//  Created by songhee on 2021/07/30.
//

#include <iostream>
#include <string>
using namespace std;

string input, bomb;
char s[1000001];
int check = 1, s_idx, b_idx;

int main(int argc, const char * argv[]) {
    cin >> input >> bomb;
    
    for(int i = 0; i < input.length(); i++)
    {
        s[s_idx++] = input[i];
        b_idx = (int)bomb.length();
        if(input[i] == bomb[--b_idx])
        {
            check = 1;
            int bomb_start = s_idx - (int)bomb.length();
            for(int j = s_idx-1; j >= bomb_start; j--)
            {
                if(s[j] != bomb[b_idx--])
                {
                    check = 0;
                    break;
                }
            }
            if(check) s_idx -= bomb.length();
        }
    }
    if(s_idx == 0) printf("FRULA");
    else for(int i = 0; i < s_idx; i++) printf("%c", s[i]);
    printf("\n");
    return 0;
}
