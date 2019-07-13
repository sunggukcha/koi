#include <iostream>
using namespace std;

int main(){
    int arr[10010], mi=2e9, ma=0, n, limit;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> arr[i];
        if (arr[i] > ma) ma = arr[i];
    }
    cin >> limit;
    int start=0, end=ma, mid;
    while (start<=end){
        mid = (start + end) / 2;
        int sum = 0;
        for(int i=0;i<n;i++){
            if (arr[i] > mid) sum += mid;
            else sum += arr[i];
        }
        if (sum > limit) end = mid - 1;
        else start = mid + 1;
    }
    cout << end;
    return 0;
}
