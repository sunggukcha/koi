#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int c; cin >> c;
    int scores[1010];
    while(c--){
        int n; cin >> n;
        int score = 0;
        for(int i=0;i<n;i++){
            cin >> scores[i];
            score += scores[i];
        }
        int over = 0;
        for(int i=0;i<n;i++){
            if(scores[i] > score/n) over++;
        }
        printf("%.3lf%%\n", (double)100*over/n);
    }
    return 0;
}
