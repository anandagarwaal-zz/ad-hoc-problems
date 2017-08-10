// http://practice.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k/0
#include <iostream>
#include <deque>
using namespace std;

int main() {
	int T, N, k;
	scanf("%d", &T);
	while (T--) {
		scanf("%d %d", &N, &k);
		int C[N];
		for (int i = 0; i < N; i++) {
			scanf("%d", &C[i]);
		}
		deque<int> dQueue;
		for (int i = 0; i < k; i++) {
			while (!dQueue.empty() && C[i] >= C[dQueue.back()]) {
					dQueue.pop_back();
			}
			dQueue.push_back(i);
		}
		for (int i = k; i < N; i++) {
			printf("%d ", C[dQueue.front()]);
			while (!dQueue.empty() && dQueue.front() <= i -k) {
				dQueue.pop_front();
			}
			while (!dQueue.empty() && C[i] >= C[dQueue.back()]) {
				dQueue.pop_back();
			}
			dQueue.push_back(i);
		}
		printf("%d\n", C[dQueue.front()]);
	}
	return 0;
}