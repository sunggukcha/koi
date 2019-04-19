/*
  Author: Sungguk Cha
*/

#include <algorithm>
#include <iostream>

using namespace std;

int n;
int A[2002], B[2002];
int S[2002][2002];

int main()
{
	int ans = -2e8;
	cin >> n;
	for (int i = n; i > 0; i--)
		cin >> A[i];
	for (int i = n; i > 0; i--)
		cin >> B[i];
	for (int i = 0; i <= n+1; i++) for (int j = 0; j <= n+1; j++) S[i][j] = (int)-2e7;
	S[n][n] = 0;
	for (int i = n; i >= 0; i--) {
		for (int j = n; j >= 0; j--) {
			S[i][j] = max(S[i][j], max(S[i + 1][j + 1], S[i + 1][j]));
			if (A[i] > B[j + 1])
				S[i][j] = max(S[i][j], S[i][j + 1] + B[j + 1]);
			if (S[i][j] > ans) ans = S[i][j];
		}
	}
	cout << ans;
	return 0;
}
