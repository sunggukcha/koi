#include <iostream>
using namespace std;

int n;
int B[110][110];
int S[110];

int main(){
    int a, b, c, d;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a >> b >> c >> d;
        S[i] = c * d;
        for (int j=a;j<a+c;j++){
            for (int k=b;k<b+d;k++){
                S[B[j][k]]--;
                B[j][k] = i;
            }
        }
    }
    for(int i=1;i<=n;i++) cout << S[i] << endl;
    return 0;
}
