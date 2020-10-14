#include<iostream>
#include<vector>
using namespace std;
// 선택정렬
// 배열이 있을때
// i , j 이중포문이 돌고
// 처음 a[i] 이후에 있는 값중 가장 작은 값과 스왑
// 이것을 n까지 반복
int main() {
	int n, i, j, idx,tmp;
	cin >> n;
	vector<int> a(n);
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}
	for(i=0;i<n;i++){
		idx = i; //i 이후에 값중 가장 작은 인덱스 번호를 위해서
		for (j = i + 1; j < n; j++) {
			if (a[j] < a[idx]) idx = j;
		}
		tmp = a[i];
		a[i] = a[idx];
		a[idx] = tmp; 
	}
	for (i = 0; i < n; i++) {
		cout << a[i]<<" ";
	}
}