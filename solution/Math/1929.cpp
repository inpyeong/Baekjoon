//#include <iostream>
//using namespace std;
//bool prime[1000001];
//int main() {
//	int m, n;
//	cin >> m >> n;
//	prime[0] = true;
//	prime[1] = true;
//	for (int i = 2; i <= n; i++) {
//		if (prime[i] == false) {
//			for (int j = i * 2; j <= n; j += i) {
//				prime[j] = true;
//			}
//		}
//	}
//	for (int i = m; i <= n; i++) {
//		if (!prime[i]) {
//			cout << i << "\n";
//		}
//	}
//	return 0;
//}