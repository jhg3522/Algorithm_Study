#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n, i,j,tmp;
	cin >> n;
	vector<int> ch(n + 1);
	for (i = 2; i <= n; i++) {
		tmp = i;
		j = 2;
		while (1) {
			if (tmp%j == 0) {
				tmp /= j;
				ch[j]++;
			}
			else j++;
			if (tmp == 1) break;
		}
	}
	if (ch[2] > ch[5]) cout << ch[5];
	else cout << ch[2];

	return 0;
}