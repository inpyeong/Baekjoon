//#include <cstdio>
//using namespace std;
//int a[20];
//int main() {
//	int n, k;
//	scanf("%d %d", &n, &k);
//	for (int i = 1; i <= n; i++) {
//		scanf("%d", &a[i]);
//	}
//	int index;
//	for (int i = 1; i <= n; i++) {
//		if (a[i] <= k) {
//			index = i;
//		}
//	}
//	int ans = 0;
//	while (true) {
//		if (k < a[index]) {
//			index -= 1;
//			continue;
//		}
//		k -= a[index];
//		ans += 1;
//		//printf("%d %d\n", k, ans);
//		if (k == 0) { break; }
//	}
//	printf("%d", ans);
//	return 0;
//}