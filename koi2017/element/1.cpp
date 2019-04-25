#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	int n; cin >> n;
	int a1, b1, c1, d1;
	int a2, b2, c2, d2;
	int t, tt;
	for (int i = 0; i < n; i++) {
		a1 = b1 = c1 = d1 = a2 = b2 = c2 = d2 = 0;
		cin >> t;
		for (int j = 0; j < t; j++) {
			cin >> tt;
			if (tt == 4) a1++;
			if (tt == 3) b1++;
			if (tt == 2) c1++;
			if (tt == 1) d1++;
		}
		cin >> t;
		for (int j = 0; j < t; j++) {
			cin >> tt;
			if (tt == 4) a2++;
			if (tt == 3) b2++;
			if (tt == 2) c2++;
			if (tt == 1) d2++;
		}
		//cout << a1 << " " << b1 << " " << c1 << " " << d1 << endl;
		//cout << a2 << " " << b2 << " " << c2 << " " << d2 << endl;
		
		if (a1 > a2 ||
			a1 == a2 && b1 > b2 ||
			a1 == a2 && b1 == b2 && c1 > c2 ||
			a1 == a2 && b1 == b2 && c1 == c2 && d1 > d2)
			cout << 'A' << endl;
		else if (a1 < a2 ||
			a1 == a2 && b1 < b2 ||
			a1 == a2 && b1 == b2 && c1 < c2 ||
			a1 == a2 && b1 == b2 && c1 == c2 && d1 < d2)
			cout << 'B' << endl;
		else
			cout << 'D' << endl;
		
	}
	return 0;
}
