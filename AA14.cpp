#include<iostream>
using namespace std;

int reverse(int x) {
	int a=0;
	while (x > 0) {
		a = (a * 10 + x % 10);
		x /= 10;
	}
	return a;
}

bool isPrime(int x) {
	int i = 2;
	if (x == 1) return false;
	bool flag = true;
	for (i; i*i <= x; i++) {
		if (x%i == 0) {
			flag = false;
			break;
		}
	}
	return flag;
}

int main() {
	int N,t;
	cin >> N;
	while (N--) {
		cin >> t;
		if (isPrime(reverse(t)) == true)
			cout << reverse(t) << " ";
	}
	return 0;
}