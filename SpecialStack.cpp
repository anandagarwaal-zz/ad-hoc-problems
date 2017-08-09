// http://practice.geeksforgeeks.org/problems/special-stack/1

/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*Complete the function(s) below*/
int minElement;
void push(int a) {
	if (s.empty()) {
		s.push(a);
		minElement = a;
		return;
	} else if (a < minElement) {
		s.push(2*minElement - a);
		minElement = a;
		return;
	} else {
		s.push(a);
	}
}
bool isFull(int n) {
	return (s.size() == n);
}
bool isEmpty() {
	return s.empty();
}
int pop() {
	if (s.empty()) {
		return -1;
	} 
	int temp = s.top();
	s.pop();
	if (temp < minElement) {
		int a = minElement;
		minElement = (2 * minElement) - temp;
		return a;
	} else {
		return temp;
	}
}
int getMin() {
	if (s.empty()) {
		return -1;
	} else {
		return minElement;
	}
}