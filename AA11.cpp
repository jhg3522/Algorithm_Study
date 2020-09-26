#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int small(int a) {
	int sum = 0;
	while (a > 0) {
		a /= 10;
		sum++;
	}
	return sum;
}
int main() {
	int n;
	int sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		sum += small(i);
	}
	cout << sum;
}