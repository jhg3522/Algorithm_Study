#include<iostream>
using namespace std;

int main() {
	char a[50];
	cin >> a;
	int res = 0, cnt = 0, i;
	for (i = 0; a[i]!='\0'; i++) {
		if (a[i] >= 48 && a[i] <= 57) {//���ڿ����� 48~57�� ���� -48�ϸ� int�� ���ڷ� �ٲ�
			res = res * 10+(a[i] - 48);
			//���� ��� �� ���ڸ� ������ �и鼭 ���ϴ� �˰���.
		}
	}
	for (i = 1; i <= res; i++) { //����� ���� ���ϱ�.
		if (res%i == 0) cnt++;
	}
	cout << res << endl;
	cout << cnt;
	return 0;
}