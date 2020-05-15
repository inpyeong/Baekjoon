//#include <cstdio>
//int a[1000000];
//int n, m;
//
//bool check(long long x) {
//	long long cnt = 0;
//	for (int i = 0; i < n; i++) {
//		if (a[i] > x) {
//			cnt += (a[i] - x);
//		}
//	}
//	return cnt >= m;
//}
//
//int main() {
//	scanf("%d %d", &n, &m);
//	int max = 0;
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &a[i]);
//		if (max < a[i]) {
//			max = a[i];
//		}
//	}
//	long long ans = 0;
//	long long l = 1;
//	long long r = max;
//	while (l <= r) {
//		long long mid = (l + r) / 2;
//		if (check(mid)) {
//			if (ans < mid) {
//				ans = mid;
//			}
//			l = mid + 1;
//		}
//		else {
//			r = mid - 1;
//		}
//	}
//	printf("%lld\n", ans);
//	return 0;
//}