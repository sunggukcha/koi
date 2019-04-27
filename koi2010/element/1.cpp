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
    int a, b, ans=2e9, s;
    int a1, a2;
    a = 0, b = n-1;
    while(a != b){
        s = arr[a] + arr[b];
        if (abs(ans) > abs(s)){
            a1 = arr[a];
            a2 = arr[b];
            ans = s;
        }
        if (s < 0)
            a++;
        else if (s > 0)
            b--;
        else
            break;
    }
    printf("%d %d", a1, a2);

    return 0;
}
