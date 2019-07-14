#include <stdio.h>
#include <iostream>
using namespace std;

int gold[1010];
int silver[1010];
int bronze[1010];

int main() {
	int n, target;
	scanf("%d %d", &n, &target);
	for (int i = 1; i <= n; i++){
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		gold[a] = b;
		silver[a] = c;
		bronze[a] = d;
	}
	int more = 0;
	for (int i = 1; i <= n; i++){
		if (gold[target] < gold[i] ||
			gold[target] == gold[i] && silver[target] < silver[i] ||
			gold[target] == gold[i] && silver[target] == silver[i] && bronze[target] < bronze[i])
			more++;
	}
	cout << more+1;
	return 0;
}
