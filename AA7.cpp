#include<iostream>
#include<vector>
#include<string>
using namespace std;
//아스키코드 32을 더해서 대문자를 소문자화한다..
int main() {
	string s;
	vector<char> a;
	getline(cin, s);
	for (int i =0; i < s.size(); i++) {
		if (s[i] != ' ')
			a.push_back(s[i]);
	}
	for (int i = 0; i < a.size(); i++) {
		if (a[i] < 97) {
			cout << (char)(a[i] + 32);
		}
		else
			cout << a[i];
	}

}