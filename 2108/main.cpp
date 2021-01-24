//
//  main.cpp
//  2108
//
//  Created by songhee on 2021/01/24.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    int N; scanf("%d", &N);
    int arr[N]; fill_n(arr, N, 0);
    int min = 10000, max = -10000;
    double sum = 0;
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
        if(arr[i] < min) min = arr[i];
        if(arr[i] > max) max = arr[i];
    }
    sort(arr, arr+N);
    
    int minus[4001], plus[4001];
    fill_n(minus, 4001, 0); fill_n(plus, 4001, 0);
    
    for(int i = 0; i < N; i++)
    {
        if(arr[i] < 0)
        {
            int j = arr[i] * -1;
            minus[j]++;
        }
        else plus[arr[i]]++;
    }
    
    int many = -10000;
    vector<int> v;
    for(int i = 0; i < 4001; i++)
    {
        if(0 < minus[i] && many <= minus[i]) many = minus[i];
        if(0 < plus[i] && many <= plus[i]) many = plus[i];
    }
    for(int i = 0; i < 4001; i++)
    {
        if(many == minus[i])
        {
            int j = i * -1;
            v.push_back(j);
        }
        if(many == plus[i]) v.push_back(i);
    }
    sort(v.begin(), v.end());
    
    printf("%.f\n", round(sum/N));
    printf("%d\n", arr[N/2]);
    if(v.size() > 1)
        printf("%d\n", v[1]);
    else printf("%d\n", v[0]);
    printf("%d\n", max-min);
    return 0;
}
