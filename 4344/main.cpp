//
//  main.cpp
//  4344
//
//  Created by songhee on 2020/11/26.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int C, N;
    int sum, best, avg;
    int v[1000] = {0,};
    
    cin >> C;
    
    for(int i = 0; i < C; i++) {
        cin >> N;
        sum = 0;
        best = 0;
        
        for(int j = 0; j < 1000; j++) {
            v[j] = 0;
        }
        
        for(int j = 0; j < N; j++) {
            cin >> v[j];
            sum += v[j];
        }
        avg = sum / N;
        for(int j = 0; j < N; j++) {
            if(v[j] > avg)
                best++;
        }
        double per = (double)best / N;
        per *= 100;
        printf("%.3f", per);
        cout << "%" << endl;
    }
    return 0;
}

