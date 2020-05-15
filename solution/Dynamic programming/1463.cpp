//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int arr[3];
//
//int getMin(int a, int b, int c) {
//	arr[0] = a;
//	arr[1] = b;
//	arr[2] = c;
//	sort(arr, arr + 3);
//	return arr[0];
//}
//
//int main1463() {
//	int N;
//	cin >> N;
//	int dp[1000001];
//	dp[2] = 1;
//	dp[3] = 1;
//	int a, b, c;
//	for (int i = 4; i <= N; i++) {
//		a = 99999;
//		b = 99999;
//		c = 99999;
//		if ((i % 3) == 0) {
//			a = dp[i / 3] + 1;
//		}
//		if ((i % 2) == 0) {
//			b = dp[i / 2] + 1;
//		}
//		c = dp[i - 1] + 1;
//		dp[i] = getMin(a, b, c);
//	}
//		cout << dp[N] << " ";
//	return 0;
//}