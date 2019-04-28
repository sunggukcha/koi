#include <iostream>

using namespace std;

int N, K;
int a[7][2];

int main()
{
    cin >> N >> K;
    int c, b;
    for(int i=0;i<N;i++){
        cin >> c >> b;
        a[b][c]++;
    }
    int sum=0;
    for(int i=1;i<=6;i++){
        sum += a[i][0] / K;
        if (a[i][0] % K > 0) sum++;
        sum += a[i][1] / K;
        if (a[i][1] % K > 0) sum++;
    }
    cout << sum;

    return 0;
}
