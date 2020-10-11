#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

int main() {
	int n, i;
	cin >> n;
	vector<int> a(n+1);
	for (i = 1; i <= n; i++) {
		cin >> a[i];
	}
	cout << 1 << " ";
	for (i = 2; i <= n; i++) {
		int cnt = 0;
		for (int j = i - 1; j >= 1; j--) {
			if (a[j] >= a[i])cnt++;
		}
		cout << cnt + 1<<" ";
	}
	return 0;
}