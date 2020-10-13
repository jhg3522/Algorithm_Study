#include<iostream>
#include<vector>
using namespace std;

int main() {
	int i, n,cnt=0,tmp;
	cin >> n;
	for (i = 1; i <= n; i++) {
		tmp = i;
		while (tmp > 0) {
			if (tmp % 10 == 3) cnt++;
			tmp /= 10;
		}
	}
	cout << cnt;

	return 0;
}