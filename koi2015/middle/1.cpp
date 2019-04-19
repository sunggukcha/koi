/*
  Author: Sungguk Cha
  KOI 2015 middle 1
  One notable thing is cin takes much more time than scanf. Using scanf is recommended.
*/


#include <algorithm>
#include <cstdio>

using namespace std;

int K, C;

int main()
{
	scanf("%d%d", &K, &C);
	for (int I = 0; I < C; I++) {
		int i, j; 
		scanf("%d%d", &i, &j);

		int dif = abs(i - j);
		int rem = K - max(i, j);
		if (i == j)
			printf("1\n");
		else if (i < j) {
			if (dif - rem <= 1)
				printf("1\n");
			else
				printf("0\n");
		}
		else {
			if (dif - rem <= 2)
				printf("1\n");
			else
				printf("0\n");
		}
	}
	return 0;
}
