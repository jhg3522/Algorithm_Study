#include<iostream>
using namespace std;
//»ðÀÔÁ¤·Ä

int main() {
	int arr[101];
	int n,i, j, tmp;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (i = 1; i < n; i++) {
		tmp = arr[i];
		for (j = i - 1; j >= 0; j--) {
			if (arr[j] > tmp)
				arr[j + 1] = arr[j];
			else
				break;
		}
		arr[j + 1] = tmp;
	}
	for (i = 0; i < n; i++) {
		cout <<arr[i]<<" ";
	}
}