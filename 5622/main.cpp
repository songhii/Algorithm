//
//  main.cpp
//  5622
//
//  Created by songhee on 2021/01/06.
//

#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]) {
    string s;
    int time = 0;
    cin >> s;
    
    for(int i = 0; i < s.length(); i++)
    {
        if(65 <= s.at(i) && s.at(i) <= 67)
            time += 3;
        else if(68 <= s.at(i) && s.at(i) <= 70)
            time += 4;
        else if(71 <= s.at(i) && s.at(i) <= 73)
            time += 5;
        else if(74 <= s.at(i) && s.at(i) <= 76)
            time += 6;
        else if(77 <= s.at(i) && s.at(i) <= 79)
            time += 7;
        else if(80 <= s.at(i) && s.at(i) <= 83)
            time += 8;
        else if(84 <= s.at(i) && s.at(i) <= 86)
            time += 9;
        else if(87 <= s.at(i) && s.at(i) <= 90)
            time += 10;
    }
    cout << time << endl;
    return 0;
}
