#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//동적 계획법 bottom - up
// 작은거부터 하나씩 늘려나가면서 규칙찾아서
//점화식 만들기
//3m부터 선부터 주어지지만 규칙을 위해서 1m터부터 생각해보기
//1m -> 1m	1개
//2m -> 1m 1m , 2m	2개
//3m -> 1m 1m 1m , 2m 1m, 1m 2m		3개 (1m+2m)
//4m -> 1m 1m 1m 1m, 2m 1m 1m, 1m 2m 1m, 1m 1m 2m, 2m 2m	 5개(3m+2m)
//5m -> 1m 1m 1m 1m 1m, 2m 1m 1m 1m, 1m 2m 1m 1mm ,1m 1m 2m 1m, 1m 1m 1m 2m,
//2m 2m 1m, 2m 1m 2m, 1m 2m 2m -> 8개 (3m+4m)

int main() {
	int n;
	int arr[100] = { 0,1,2, };
	cin >> n;
	for (int i = 3; i <= n; i++) {
		arr[i] = arr[i - 2] + arr[i - 1];
	}
	cout << arr[n];
	
}