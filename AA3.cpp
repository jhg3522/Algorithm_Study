#include<iostream>
using namespace std;

int main() {
	int N;
	int answer = 0;
	cin >> N;
	for (int i = 1; i < N / 2; i++) {
		if (N%i == 0) {
			cout << i << " + ";
			answer += i;
		}
	}
	if (N % (N / 2) == 0) {
		answer += (N / 2);
		cout << (N / 2) << " = " << answer;
	}
	return 0;
}