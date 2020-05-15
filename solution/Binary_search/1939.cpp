//#include <cstdio>
//#include <vector>
//#include <cstring>
//using namespace std;
//
//const int MAX = 1000000000;
//vector <pair<int, int>> a[100001];
//bool check[100001];
//int n, m, st, ed;
//
//bool go(int node, int x) {
//	if (check[node]) {
//		return false;
//	}
//	check[node] = true;
//	if (node == ed) {
//		return true;
//	}
//	for (pair<int, int>& p : a[node]) {
//		int next = p.first;
//		int cost = p.second;
//		if (x <= cost) {
//			if (go(next, x)) {
//				return true;
//			}
//		}
//	}
//	return false;
//}
//
//int main() {
//	scanf("%d %d", &n, &m);
//	for (int i = 0; i < m; i++) {
//		int u, v, cost;
//		scanf("%d %d %d", &u, &v, &cost);
//		a[u].push_back(make_pair(v, cost));
//		a[v].push_back(make_pair(u, cost));
//	}
//	scanf("%d %d", &st, &ed);
//	int l = 1;
//	int r = MAX;
//	int ans = 0;
//	while (l <= r) {
//		int mid = l + (r - l) / 2;
//		memset(check, false, sizeof(check));
//		if (go(st, mid)) {
//			ans = mid;
//			l = mid + 1;
//		}
//		else {
//			r = mid - 1;
//		}
//	}
//	printf("%d\n", ans);
//	return 0;
//}