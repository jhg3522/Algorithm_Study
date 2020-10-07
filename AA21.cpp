#include<iostream>
using namespace std;

int main() {
	int a[10], b[10], i,j=9;
	int ans_a = 0, ans_b = 0;
	char c[10];
	for (i=0; i < 10; i++) {
		cin >> a[i];
	}
	for (i=0; i < 10; i++) {
		cin >> b[i];
	}
	for (i=0; i < 10; i++) {
		if (a[i] == b[i]) c[i] = 'D';
		else if(a[i]>b[i]) c[i] = 'A';
		else c[i] = 'B';
	}
	for (i=0; i < 10; i++) {
		if (c[i] == 'A') ans_a += 3;
		else if (c[i] == 'B') ans_b += 3;
		else { ans_a++; ans_b++; }
	}
	cout << ans_a << " " << ans_b << endl;
	if (ans_a == ans_b) {
		while (c[j] == 'D') {
			j--;
			if (j == 0) {
				break;
			}
		}
		cout << c[j];
	}
	else {
		if (ans_a > ans_b) cout << "A";
		else cout << "B";
	}
	return 0;
}