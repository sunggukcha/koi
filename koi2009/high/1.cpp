#include <algorithm>
#include <iostream>

using namespace std;

int n, k;
int arr[20001];
int board[20001];
int tboard[20001];
int target[20001];

void shuffle(){
    for(int i=1;i<=n;i++)  tboard[i] = board[arr[i]];
    for(int i=1;i<=n;i++)  board[i] = tboard[i];
}

int main(){
    long long res = 1;
    cin >> n; k = n;
    for(int i=1;i<=n;i++){
        cin >> arr[i];
        board[i] = i;
        target[i] = (int) 2e9;
    }
    int _round = 1;
    while(k > 0){
        shuffle();
        for (int i=1;i<=n;i++){
            if(board[i] == i){
                if (target[i] > _round && _round != 0){
                    target[i] = _round;
                    k--;
                }
            }
        }
        _round++;
        //for (int i=1;i<=n;i++) cout << board[i] << " "; cout << endl;
        //for (int i=1;i<=n;i++) cout << target[i] << " "; cout << endl;
    }
    
    res = target[1] / __gcd(target[1], target[2]) * target[2];
    for(int i=3;i<=n;i++){
        res = res / __gcd(target[i], (int)res) * target[i];
    }
    cout << res;
    
    return 0;
}
