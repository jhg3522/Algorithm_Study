#include<iostream>
using namespace std;
//�־��� N�� ���Ͽ� 1~N������ �Ҽ��� ���� ���
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