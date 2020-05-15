//#include <iostream>
//using namespace std;
//
//int main11057() {
//	int N;
//	cin >> N;
//	
//	int dp[1001][10] = { 0, };
//	for (int i = 0; i <= 9; i++) {
//		dp[1][i] = 1;
//	}
//	int sum;
//	for (int i = 2; i <= N; i++) {
//		for (int j = 0; j <= 9; j++) {
//			sum = 0;
//			for (int k = j; k <= 9; k++) {
//				sum += dp[i - 1][k];
//			}
//			dp[i][j] = sum % 10007;
//		}
//	}
//	int ans = 0;
//	for (int i = 0; i <= 9; i++) {
//		ans += dp[N][i];
//	}
//	cout << ans%10007;
//	return 0;
//}