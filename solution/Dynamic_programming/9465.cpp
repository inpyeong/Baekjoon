//#include <algorithm>
//#include <cstdio>
//#include <iostream>
//int a[3][100001];
//int D[100001][3];
//using namespace std;
//int main() {
//	int t;
//	scanf("%d", &t);
//	while (t--) {
//		int n;
//		scanf("%d", &n);
//		for (int i = 1; i <= 2; i++) {
//			for (int j = 1; j <= n; j++) {
//				scanf("%d", &a[i][j]);
//			}
//		}
//		D[1][0] = 0;
//		D[1][1] = a[1][1];
//		D[1][2] = a[2][1];
//		for (int i = 1; i <= n; i++) {
//			D[i][0] = max(D[i - 1][0], max(D[i - 1][1], D[i - 1][2]));
//			D[i][1] = max(D[i - 1][0], D[i - 1][2]) + a[1][i];
//			D[i][2] = max(D[i - 1][0], D[i - 1][1]) + a[2][i];
//		}
//		int ans = max(D[n][0], max(D[n][1], D[n][2]));
//		printf("%d\n", ans);
//	}
//	return 0;
//}