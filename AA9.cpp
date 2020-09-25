#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int n, m;
	int v, c, k;
	cin >> n >> m;
	//n=물건종류, m= 최대무게
	//v=무게,c= 만족도,k=물건의 개수
	vector<vector<int>> vec;
	vector<int> t;
	while(n--) {
		cin >> v >> c >> k;
		t.push_back(v); t.push_back(c); t.push_back(k);
		vec.push_back(t);
	}
	cout < vec[0][0];
}