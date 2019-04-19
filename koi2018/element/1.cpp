/*
  Author: Sungguk Cha
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n; cin >> n;
    int _min = 2e9;
    int _max = -2e9;
    for(int i=0;i<n;i++){
        int k; cin >> k;
        _min = min(k, _min);
        _max = max(k, _max);
    }
    cout << _max - _min;
    return 0;
}
