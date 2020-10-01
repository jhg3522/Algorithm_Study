#include<iostream>
#include<algorithm>
using namespace std;
//int형 배열과
//char형 배열과 1:1 대응시키면 Anagram.
int a[53], b[53]; //int 형 배열
int main() {
	char str[101];
	int i;
	cin >> str;
	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 65 && str[i] <= 99) {//대문자탐색
			a[str[i] - 64]++; //대문자 A는 아스키넘버 65이므로
		}
		else a[str[i] - 70]++;
	}
	cin >> str;
	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 65 && str[i] <= 99) {//대문자탐색
			b[str[i] - 64]++; //대문자 A는 아스키넘버 65이므로
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