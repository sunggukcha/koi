//
// Referred: https://justicehui.github.io/koi/2019/01/20/BOJ15971/
//

#include <algorithm>
#include <stdio.h>
#include <vector>

using namespace std;

typedef pair<int, int> p;
vector<p> E[100001];
int dist[100001];
int maxi[100001];
bool check[100001];

int n, a, b;
int x1, x2, d;

void DFS(int v, int d, int m) {
	dist[v] = d;
	maxi[v] = m;
	check[v] = true;
	for (auto u : E[v]) {
		if (!check[u.first]) {
			DFS(u.first, d + u.second, max(m, u.second));
		}
	}
}

int main()
{
	scanf("%d%d%d", &n, &a, &b);
	for (int i = 0; i < n-1; i++) {
		scanf("%d%d%d", &x1, &x2, &d);
		E[x1].push_back({ x2, d });
		E[x2].push_back({ x1, d });
	}
	if (a == b) {
		printf("0");
		return 0;
	}
	DFS(a, 0, 0);
	printf("%d", dist[b] - maxi[b]);
	return 0;
}
