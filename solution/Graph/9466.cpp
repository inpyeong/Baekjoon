//#include <cstdio>
//int a[100001];
//int check[100001];
//int which_search[100001];
//int dfs(int x, int cnt, int& step) {
//	if (check[x] != 0) {
//		if (step != which_search[x]) {
//			return 0;
//		}
//		return cnt - check[x];
//	}
//	check[x] = cnt;
//	which_search[x] = step;
//	return dfs(a[x], cnt + 1, step);
//}
//int main() {
//	int t;
//	scanf("%d", &t);
//	while (t--) {
//		int n;
//		scanf("%d", &n);
//		for (int i = 1; i <= n; i++) {
//			scanf("%d", &a[i]);
//			check[i] = 0;
//			which_search[i] = 0;
//		}
//		int ans = 0;
//		for (int i = 1; i <= n; i++) {
//			if (check[i] == 0) {
//				ans += dfs(i, 1, i);
//			}
//		}
//		printf("%d\n", n - ans);
//
//	}
//	return 0;
//}
