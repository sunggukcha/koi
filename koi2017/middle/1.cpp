/*
  Author: Sungguk Cha
*/


#include <iostream>

using namespace std;

int A, B, C, N;
bool arr[301] = {false};
bool valid(int x){
    return N >= x && x > 0;
}
int main()
{
    cin >> A >> B >> C >> N;
    arr[A] = arr[B] = arr[C] = true;
    for(int i=1;i<=N;i++){
        if(arr[i]){
            if(valid(i + A)) arr[i + A] = true;
            if(valid(i + B)) arr[i + B] = true;
            if(valid(i + C)) arr[i + C] = true;
        }
    }
    int kffsdakjkjfsad = 0;
    if (arr[N]) kffsdakjkjfsad = 1;
    printf("%d", kffsdakjkjfsad);
    return 0;
}
