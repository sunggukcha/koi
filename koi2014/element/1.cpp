#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    if ( n % 10 != 0){
        cout << -1;
        return 0;
    }
    cout << n / 300 << " " << (n % 300) / 60 << " "<< (n % 60) / 10;
    return 0;
}
