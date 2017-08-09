// http://practice.geeksforgeeks.org/problems/stock-span-problem/0
#include <iostream>
#include <cstdio>
#include <cstring>
#include <stack>

using namespace std;

int main() {
	int T, N, temp;
	scanf("%d", &T);
	while (T--) {
		scanf("%d", &N);
		int C[N], S[N];
		for (int i = 0; i < N; i++) {
			scanf("%d", &C[i]);
		}
		stack<int> indices;
		indices.push(0);
		S[0] = 1;
		for (int i = 1; i < N; i++) {
			while (!indices.empty() && C[indices.top()] <= C[i]) {
				indices.pop();
			}
			S[i] = (indices.empty()) ? (i + 1) : (i - indices.top());
			indices.push(i);
		}
		for (int i = 0; i < N; i++) {
			printf("%d ", S[i]);
		}
		printf("\n");
	}
}