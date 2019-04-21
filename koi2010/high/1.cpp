#include <algorithm>
#include <stdio.h>

using namespace std;

int n;
int arr[100001];

int main()
{
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf("%d", &arr[i]);
    sort(arr, arr+n);
    long long ans = 1e10, s;
    int a, b;
    int a1, a2, a3;
    for(int i=0;i<n-2;i++){
        a = i+1, b = n-1;
        while(a != b){
            s = (long long)arr[a] + arr[b] + arr[i];
            if (abs(ans) > abs(s)){
                a1 = arr[i];
                a2 = arr[a];
                a3 = arr[b];
                ans = s;
            }
            if (s < 0)
                a++;
            else if (s > 0)
                b--;
            else
                break;
        }
    }
    printf("%d %d %d", a1, a2, a3);

    return 0;
}
