//vector<int> max_mul(int i, int n) {
	int mul=1;
	vector<int> a;
	vector<int> ans(2);
	while (n != 0) {
		a.push_back(n%i);
		n /= i;
	}
	for (int j = 0; j < a.size(); j++) {
		if (a[j] != 0) {
			mul *= a[j];
		}
	}
	ans[0]=i;
	ans[1]=mul;
	return ans;
}

//int main() {
	int n,i;
	int arr[2] = { 0,1 };
	cin >> n;
	for (int i = 2; i <= n; i++) {
		if (arr[1] <= max_mul(i, n)[1]) {
			arr[1] = max_mul(i, n)[1];
			arr[0] = max_mul(i, n)[0];
		}
	}
//	cout << "[" << arr[0] << "," <<  arr[1] << "]";

}
