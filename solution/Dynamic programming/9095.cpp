//#include <iostream>
//using namespace std;
//
//int main9095() {
//	int t, n;
//	int dp[11];
//	dp[1] = 1;
//	dp[2] = 2;
//	dp[3] = 4;
//	for (int i = 4; i < 11; i++) {
//		dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
//	}
//
//	cin >> t;
//	while (t--) {
//		cin >> n;
//		cout << dp[n] << "\n";
//	}
//	return 0;
//}

//#include <cstdio>
//int main() {
//	int t;
//	scanf("%d", &t);
//	while (t--) {
//		int num;
//		scanf("%d", &num);
//		int cnt = 0;
//		for (int a = 1; a <= 3; a++) {
//			int temp = a;
//			if (temp == num) cnt++;
//			for (int b = 1; b <= 3; b++) {
//				temp = a + b;
//				if (temp == num) cnt++;
//				for (int c = 1; c <= 3; c++) {
//					temp = a + b + c;
//					if (temp == num) cnt++;
//					for (int d = 1; d <= 3; d++) {
//						temp = a + b + c + d;
//						if (temp == num) cnt++;
//						for (int e = 1; e <= 3; e++) {
//							temp = a + b + c + d + e;
//							if (temp == num) cnt++;
//							for (int f = 1; f <= 3; f++) {
//								temp = a + b + c + d + e + f;
//								if (temp == num) cnt++;
//								for (int g = 1; g <= 3; g++) {
//									temp = a + b + c + d + e + f + g;
//									if (temp == num) cnt++;
//									for (int h = 1; h <= 3; h++) {
//										temp = a + b + c + d + e + f + g + h;
//										if (temp == num) cnt++;
//										for (int i = 1; i <= 3; i++) {
//											temp = a + b + c + d + e + f + g + h + i;
//											if (temp == num) cnt++;
//											for (int j = 1; j <= 3; j++) {
//												temp = a + b + c + d + e + f + g + h + i + j;
//												if (temp == num) cnt++;
//											}
//										}
//									}
//								}
//							}
//						}
//					}
//				}
//			}
//		}
//		printf("%d\n", cnt);
//	}
//	return 0;
//}