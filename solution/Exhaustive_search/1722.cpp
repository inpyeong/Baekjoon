//#include <cstdio>
//#include <vector>
//using namespace std;
//long long f[21] = { 1 };
//bool c[21];
//int main() {
//	for (int i = 1; i <= 20; i++) f[i] = f[i - 1] * i;
//	int n;
//	scanf("%d", &n);
//	vector <int> a(n);
//	int what;
//	scanf("%d", &what);
//	if (what == 1) {
//		long long k;
//		scanf("%lld", &k);
//		for (int i = 0; i < n; i++) {
//			for (int j = 1; j <= n; j++) {
//				if (c[j] == true) continue;
//				if (f[n - i - 1] < k) {
//					k -= f[n - i - 1];
//				}
//				else {
//					a[i] = j;
//					c[j] = true;
//					break;
//				}
//			}
//		}
//		for (int i = 0; i < n; i++) printf("%d ", a[i]);
//	}
//	else if (what == 2) {
//		long long ans = 0;
//		for (int i = 0; i < n; i++) scanf("%d", &a[i]);
//		for (int i = 0; i < n; i++) {
//			for (int j = 1; j < a[i]; j++) {
//				if (c[j] == false) {
//					ans += f[n - i - 1];
//				}
//			}
//			c[a[i]] = true;
//		}
//		printf("%lld", ans + 1);
//	}
//	printf("\n");
//	return 0;
//}