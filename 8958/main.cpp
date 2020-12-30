//
//  main.cpp
//  8958
//
//  Created by songhee on 2020/12/30.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    int N, sum, score;
    string str;
    
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        sum = 0;
        score = 0;
        str.clear();
        
        cin >> str;
        for(int j = 0; j < str.length(); j++)
        {
            if(str.at(j) == 'O')
            {
                score++;
                sum += score;
            }
            else
            {
                score = 0;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
