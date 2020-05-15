//#include <cstdio>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int a[1000000];
//int b[1000000];
//int c[1000000];
//
//int main() {
//	int n, m;
//	scanf("%d %d", &n, &m);
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &a[i]);
//	}
//	for (int i = 0; i < m; i++) {
//		scanf("%d", &b[i]);
//	}
//	int i = 0, j = 0, k = 0;
//	while (i <= n - 1 && j <= m - 1) {
//		if (a[i] <= b[j]) {
//			c[k++] = a[i++];
//		}
//		else{
//			c[k++] = b[j++];
//		}
//	}
//	while (i <= n - 1) {
//		c[k++] = a[i++];
//	}
//	while (j <= m - 1) {
//		c[k++] = b[j++];
//	}
//	for (int i = 0; i < n + m; i++) {
//		printf("%d ", c[i]);
//	}
//	return 0;
//}