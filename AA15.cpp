#include<iostream>
using namespace std;
//주어진 N에 대하여 1~N까지의 소수의 개수 출력
int main() {
	int N,i,j,flag, cnt = 0;
	cin >> N;
	for (i = 2; i <= N; i++) {
		flag = 1;
		for (j=2; j*j <= i; j++) {
			if (i%j == 0) {
				flag = 0;
				break;
			}
		}
		if (flag == 1) cnt++;
	}
	cout << cnt;
}