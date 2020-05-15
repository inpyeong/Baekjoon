//#include <cstdio>
//#include <vector>
//#include <cstring>
//using namespace std;
//
//bool check[1001];
//vector <int> a(1001);
//
//void dfs(int x) {
//	if (check[x]) {
//		return;
//	}
//	check[x] = true;
//	dfs(a[x]);
//}
//
//int main() {
//	int t;
//	scanf("%d", &t);
//	while (t--) {
//		int n;
//		scanf("%d", &n);
//		for (int i = 1; i <= n; i++) {
//			int node;
//			scanf("%d", &a[i]);
//		}
//		int ans = 0;
//		for (int i = 1; i <= n; i++) {
//			if (check[i] == false) {
//				dfs(i);
//				ans += 1;
//			}
//		}
//		printf("%d\n", ans);
//		for (int i = 1; i <= n; i++) { a[i] = 0; }
//		memset(check, false, n + 1);
//	}
//	return 0;
//}