//#include <cstdio>
//#include <vector>
//#include <queue>
//#include <cstring>
//using namespace std;
//int check[20001];
//vector <int> a[20001];
//queue <int> q;
//int main() {
//	int t;
//	scanf("%d", &t);
//	while (t--) {
//		int n, m;
//		scanf("%d %d", &n, &m);
//		for (int i = 1; i <= n; i++) {
//			a[i].clear();
//			check[i] = 0;
//		}
//		for (int i = 0; i < m; i++) {
//			int u, v;
//			scanf("%d %d", &u, &v);
//			a[u].push_back(v);
//			a[v].push_back(u);
//		}
//		while (!q.empty()) { q.pop(); }
//		bool ok = true;
//		for (int i = 1; i <= n; i++) {
//			if (check[i] == 0) {
//				check[i] = 1;
//				q.push(i);
//				while (!q.empty()) {
//					int x = q.front();
//					q.pop();
//					for (int i = 0; i < a[x].size(); i++) {
//						int y = a[x][i];
//						if (check[y] == 0) {
//							check[y] = 3 - check[x];
//							q.push(y);
//						}
//						else if (check[x] == check[y]) {
//							ok = false;
//							break;
//						}
//					}
//				}
//			}
//		}
//		printf("%s\n", ok ? "YES" : "NO");
//	}
//	return 0;
//}