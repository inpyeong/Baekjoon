//#include <iostream>
//using namespace std;
//
//int main2193() {
//	int N;
//	cin >> N;
//
//	long long dp[91] = { 0, };
//	dp[1] = 1;
//	for (int i = 2; i <= 90; i++) {
//		dp[i] = dp[i - 1] + dp[i - 2];
//	}
//	cout << dp[N];
//	return 0;
//}