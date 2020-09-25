#include<iostream>
#include<vector>
#include<string>
using namespace std;
//아스키코드 32을 더해서 대문자를 소문자화한다..
int main() {
	string s;
	int l = 0, r = 0;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '(')
			l++;
		else
			r++;
	}
	if (l == r) {
		if (s[0] != ')' && s[s.size() - 1] != '(')
			cout << "YES";
		else
			cout << "NO";
	}
	else
		cout << "NO";
}