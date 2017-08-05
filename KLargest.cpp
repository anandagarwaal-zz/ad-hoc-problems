// http://practice.geeksforgeeks.org/problems/k-largest-elements/0
#include <iostream>
#include <algorithm>    
#include <vector>
using namespace std;

int main() {
	int T, N, k, element;
	scanf("%d", &T);
	while (T--) {
	    scanf("%d %d", &N, &k);
	    vector<int> v;
	    for (int i = 0; i < N; i++) {
	        scanf("%d", &element);
	        v.push_back(element);
	    }
	    make_heap(v.begin(), v.end());
	    int count = N - 1;
	    for (int i = 0; i < k; i++) {
	        pop_heap(v.begin(), v.end() - i);
	        printf("%d ", v[count]);
	        count--;
	    }
	    printf("\n");
	}
	return 0;
}