//#include <cstdio>
//#include <algorithm>
//using namespace std;
//int a[1001];
//int t[1001];
//int main() {
//	int n;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++) {
//		scanf("%d", &a[i]);
//	}
//	sort(a + 1, a + n + 1);
//	int ans = 0;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= i; j++) {
//			t[i] += a[j];
//		}
//		ans += t[i];
//	}
//	printf("%d", ans);
//	return 0;
//}