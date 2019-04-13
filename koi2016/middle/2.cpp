/*
  Author: Sungguk Cha
  KOI 2016 middleschool division 2
*/
#include <algorithm>
#include <iostream>

using namespace std;

int n;
int dists[100001];
int cities[100001];
int mins[100001] = {(int)2e9, };
unsigned long long D[100001];

int main()
{
	cin >> n;
	for (int i = 1; i < n; i++) cin >> dists[i - 1];
	for (int i = 0; i < n; i++) {
		cin >> cities[i];
		if (i > 0)
			mins[i] = min(mins[i-1], cities[i-1]);
	}
	for (int i = 1; i < n; i++) {
		D[i] = D[i - 1] + (unsigned long long) dists[i-1] * mins[i];
	}
	cout << D[n-1];
	return 0;
}
