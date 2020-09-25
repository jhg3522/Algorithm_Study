#include<iostream>
using namespace std;

int main() {
	char a[50];
	cin >> a;
	int res = 0, cnt = 0, i;
	for (i = 0; a[i]!='\0'; i++) {
		if (a[i] >= 48 && a[i] <= 57) {//문자열에서 48~57만 숫자 -48하면 int형 숫자로 바꿈
			res = res * 10+(a[i] - 48);
			//먼저 들어 온 숫자를 앞으로 밀면서 더하는 알고리즘.
		}
	}
	for (i = 1; i <= res; i++) { //약수의 개수 구하기.
		if (res%i == 0) cnt++;
	}
	cout << res << endl;
	cout << cnt;
	return 0;
}