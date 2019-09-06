#include <iostream>

using namespace std;

int main()
{
    int n, k;
    int c[11];
    cin >> n >> k;
    for (int i = 0; i < n; i++){
        cin >> c[i];
    }
    int answer=0;
    for (int i = n-1; i >= 0; i--){
        while (k >= c[i]){
            k -= c[i];
            answer++;
        }
    }
    cout << answer;
    return 0;
}
