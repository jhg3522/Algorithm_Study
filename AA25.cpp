#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

int main() {
	int n,i;
	cin >> n;
	
	vector<int> a(n),b(n);
	for (i = 0; i < n; i++) {
		cin >> a[i];
		b[i] = 1;
	}
	for (i = 0; i < n; i++ ) {
		for (int j = 0; j < n; j++) {
			if (a[i] <a[j]) {
				b[i]++;
			}
		}
	}
	for (i = 0; i < n; i++) {
		cout << b[i] << " ";
	}

	return 0;
}