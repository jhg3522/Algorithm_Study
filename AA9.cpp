#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int n, m;
	int v, c, k;
	cin >> n >> m;
	//n=��������, m= �ִ빫��
	//v=����,c= ������,k=������ ����
	vector<vector<int>> vec;
	vector<int> t;
	while(n--) {
		cin >> v >> c >> k;
		t.push_back(v); t.push_back(c); t.push_back(k);
		vec.push_back(t);
	}
	cout < vec[0][0];
}