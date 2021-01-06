//
//  main.cpp
//  10809
//
//  Created by songhee on 2021/01/06.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    char c[100];
    fill_n(c, 100, '\0');
    int check[26];
    fill_n(check, 26, -1);
    
    cin >> c;
    for(int i = 0; i < 100; i++)
    {
        if(c[i] == '\0')
            break;
        if(check[c[i]-97] == -1)
            check[c[i]-97] = i;
    }
    
    for(int i = 0; i < 26; i++)
        cout << check[i] << " ";
    cout << endl;
    return 0;
}
