#include<iostream>
using namespace std;

int main() {
	int A, B;
	int answer = 0;
	cin >> A >> B;
	for (int i = A; i < B; i++) {
		cout << i<<"+";
		answer += i;
	}
	answer += B;
	cout << B << "=" << answer << endl;
	return 0;
}