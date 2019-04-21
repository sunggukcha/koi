#include <algorithm>
#include <stdio.h>

using namespace std;

int main(){
    int n;
    int arr[5000001];
    long long sum = 0;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    sort(arr, arr+n);
    if(n % 2 == 0)
        printf("%d ", arr[n/2-1]);
    else
        printf("%d ", arr[n/2]);
    double ans = (double)sum / n;
    if (ans - (int)ans > 0.5)
        printf("%d", (int)ans + 1);
    else
        printf("%d", (int)ans);
    
    return 0;
}
