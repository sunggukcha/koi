/*
  Author: Sungguk Cha
  problem: KOI 2018 highschool division 1
*/
#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

struct F{
	int x, y;
	F(){}
	F(int a, int b){
		x = a; y = b;
	}
};

bool operator < (F x, F y){
	if (x.y == y.y) return x.x < y.x;
	return x.y < y.y;
}
map< int, vector<F> > maps;

int main()
{
	int n; cin >> n;
	for (int i = 0; i<n; i++){
		int a, b; cin >> a >> b;
		if (maps.find(b) == maps.end()){
			vector<F> vf;
			maps[b] = vf;
		}
		F f(a, b);
		maps[b].push_back(f);
	}
	unsigned long long res = 0;
	for (auto &u : maps){
		auto& _u = u.second;
		sort(_u.begin(), _u.end());
		int prev = 0;
		for (int i = 1; i < _u.size(); i++){
			int t = _u[i].x - _u[i - 1].x;
			res += t;
			if (prev == 0) {
				res += t;
			}
			else {
				if (prev > t)
					res -= prev - t;
			}
			prev = t;
		}
	}
	cout << res;
	return 0;
}
