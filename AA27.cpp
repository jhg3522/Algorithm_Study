#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n, i, j, tmp;
	cin >> n;
	vector<int> a(n+1);
	for (i = 2; i <= n; i++) {
		tmp = i;
		j = 2;
		while (1) { // 소인수분해 하는 과정
			if (tmp%j==0) {
				tmp /= j;
				a[j]++;
			}
			else j++;
			if (tmp == 1) break;
		}
	}
	cout << n << "! = ";
	for (i = 2; i <= n; i++) {
		if (a[i] != 0) cout << a[i] << " ";
	}
	return 0;
}
