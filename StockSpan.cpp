// http://practice.geeksforgeeks.org/problems/stock-span-problem/0
#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
	int T, N, temp;
	scanf("%d", &T);
	while (T--) {
		scanf("%d", &N);
		int C[N], S[N];
		for (int i = 0; i < N; i++) {
			S[i] = 1;
		}
		for (int i = 0; i < N; i++) {
			scanf("%d", &temp);
			C[i] = temp;
		}
		for (int i = N - 1; i > 0; i--) {
			int value = C[i];
			bool flag = true;
			for (int j = i - 1; j >= 0 && flag; j--) {
				if (C[j] > value) {
					flag = false;
					break;
				} else {
					S[i] = S[i] + 1;
				}
			}
		}
		for (int i = 0; i < N; i++) {
			printf("%d ", S[i]);
		}
		printf("\n");
	}
	return 0;
}