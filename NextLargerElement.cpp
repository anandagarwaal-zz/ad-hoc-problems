// http://practice.geeksforgeeks.org/problems/next-larger-element/0
#include <iostream>
#include <cstdio>
#include <stack>
#include <map>
using namespace std;

int main() {
	int T, N;
	scanf("%d", &T);
	while (T--) {
		scanf("%d", &N);
		int C[N], element, next, element_index;
		stack<int> s;
		map<int, int> m;
		for (int i = 0; i < N; i++) {
			scanf("%d", &C[i]);
		}
		s.push(0);
		for (int i = 1; i < N; i++) {
			next = C[i];
			if (!s.empty()) {
				element_index = s.top();
				s.pop();
				while (C[element_index] < next) {
					m[element_index] = next;
					if (s.empty()) {
						break;
					}
					element_index = s.top();
					s.pop();
				}
				if (C[element_index] > next) {
					s.push(element_index);
				}
			}
			s.push(i);
		}
		while (!s.empty()) {
			element_index = s.top();
			s.pop();
			next = -1;
			m[element_index] = -1;
		}
		for (int i = 0; i < N; i++) {
			printf("%d ", m[i]);
		}
		printf("\n");
	}
	return 0;
}