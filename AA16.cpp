#include<iostream>
#include<algorithm>
using namespace std;
//int�� �迭��
//char�� �迭�� 1:1 ������Ű�� Anagram.
int a[53], b[53]; //int �� �迭
int main() {
	char str[101];
	int i;
	cin >> str;
	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 65 && str[i] <= 99) {//�빮��Ž��
			a[str[i] - 64]++; //�빮�� A�� �ƽ�Ű�ѹ� 65�̹Ƿ�
		}
		else a[str[i] - 70]++;
	}
	cin >> str;
	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 65 && str[i] <= 99) {//�빮��Ž��
			b[str[i] - 64]++; //�빮�� A�� �ƽ�Ű�ѹ� 65�̹Ƿ�
		}
		else b[str[i] - 70]++;
	}
	for (i = 1; i <= 52; i++) {
		if (a[i] != b[i]) {
			cout << "NO";
			exit(0);
		}
	}
	cout << "YES";


	return 0;
}