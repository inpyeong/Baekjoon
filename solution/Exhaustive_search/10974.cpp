//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//int main() {
//	int n;
//	cin >> n;
//	vector <int> a(n);
//	int cnt = 1;
//	for (int i = 1; i <= n; i++) {
//		a[i - 1] = i;
//		cnt *= i;
//	}
//	for (int i = 0; i < n; i++) {
//		cout << a[i] << " ";
//	}
//	cout << "\n";
//	while (cnt--) {
//		if (next_permutation(a.begin(), a.end())) {
//			for (int i = 0; i < n; i++) {
//				cout << a[i] << " ";
//			}
//			cout << "\n";
//		}
//	}
//	return 0;
//}