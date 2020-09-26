#include<iostream>
#include<vector>
#include<string>
using namespace std;


int main() {
	string new_id = "...!@BaT#*..y.abcdefghijklm";
	string	s;

	int max = new_id.size();
	for (int i = 0; i < max; i++) {
		if (new_id[i] >= 'A' && new_id[i] <= 'Z')
			new_id[i] += 32;
	}
	for (int i = 0; i < max; i++) {
		if ((new_id[i] >= 'A' && new_id[i] <= 'Z') || (new_id[i] >= 'a' && new_id[i] <= 'z') ||(new_id[i] >= '0' && new_id[i] <= '9')
			|| (new_id[i] == '-') || (new_id[i] == '_') || (new_id[i] == '.')) {
			s.push_back(new_id[i]);
		}	
	}

	string a = "....";
	string b = "...";
	string c = "..";
	string d = ".";

	if(s.find(a)!=-1)
		s.replace(s.find(a), 4, d);
	if (s.find(b) != -1)
		s.replace(s.find(b), 3, d);
	if (s.find(c) != -1)
		s.replace(s.find(c), 2, d);
	if (s.find(a) != -1)
		s.replace(s.find(a), 4, d);
	if (s.find(b) != -1)
		s.replace(s.find(b), 3, d);
	if (s.find(c) != -1)
		s.replace(s.find(c), 2, d);

	if (s.front() == '.') {
		if (s.size() == 1) {
			s.push_back('a');
		}
		s.erase(0, 1);
	}
	if (s.back() == '.')
		s.pop_back();

	int sum = 0;
	for (int i = 0; i < s.size(); i++) {
		if((s[i] >= 'a' && s[i] <= 'z')|| (s[i] >= '0' && s[i] <= '9')){}
		else { sum += 1; }
	}
	if (s.size() == sum) {
		s.clear();
		for (int i = 0; i < sum; i++) {
			s.push_back('a');
		}
	}
	if(s.size()>15)
		s.erase(15);
	if (s.back() == '.')
		s.pop_back();

	if (s.size() < 3) {
		char k = s.back();
		for (int i = 0; i <= 3 - s.size(); i++) {
			s.push_back(k);
		}
	}
	cout << s;
}