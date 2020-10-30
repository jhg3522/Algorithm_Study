#include<iostream>
using namespace std;

int main() {
	int arr[101], i, j, tmp, n;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n - 1 - i; j++) {
			if (arr[j] > 0 && arr[j + 1] < 0) {
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	for (i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}