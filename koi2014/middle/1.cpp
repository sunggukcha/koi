#include <iostream>
using namespace std;

int x, y;
int k;
int a, b;
int D[20][20];

int main() {
	D[0][1] = 1;
	cin >> x >> y >> k;
	if (k == 0 || x == 1 || y == 1)
		for (int i = 1; i <= x; i++) for (int j = 1; j <= y; j++) D[i][j] = D[i - 1][j] + D[i][j - 1];
	else {
		if (k % y == 0) {
			a = k / y;
			b = y;
		}
		else {
			a = k / y + 1;
			b = k % y;
		}
		for (int i = 1; i <= a; i++) for (int j = 1; j <= b; j++) D[i][j] = D[i - 1][j] + D[i][j - 1];
		for (int i = a; i <= x; i++) for (int j = b; j <= y; j++) D[i][j] = D[i - 1][j] + D[i][j - 1];
	}
	cout << D[x][y];
	return 0;
}
