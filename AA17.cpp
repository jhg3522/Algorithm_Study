#include<iostream>
using namespace std;

int main() {
	int N,i,a, ans;
	cin >> N;
	while (N--) {
		cin >> a >> ans;
		int cnt = 0;
		for (i = 1; i <= a; i++) {
			cnt += i;
		}
		if (cnt == ans) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}