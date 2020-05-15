//#include <iostream>
//#include <string>
//using namespace std;
//
//int main11005() {
//	int N, B, mod, cnt = 0;
//	string ans;
//	cin >> N >> B;
//	while (N > 0) {
//		cnt++;
//		mod = N % B;
//		if (mod < 10) {
//			ans += '0' + mod;
//		}
//		else {
//			ans += 'A' + mod - 10;
//		}
//		N /= B;
//	}
//	int size = ans.length();
//	for (int i = size - 1; i >= 0; i--) {
//		cout << ans[i];
//	}
//	return 0;
//}