//#include <cstdio>
//#include <queue>
//using namespace std;
//
//int a[1000][1000];
//int c[1000][1000];
//int dx[] = { 0, 0, 1, -1 };
//int dy[] = { 1, -1, 0, 0 };
//queue <pair<int, int>> q;
//int n, m, ans;
//
//int main() {
//	scanf("%d %d", &m, &n);
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			scanf("%d", &a[i][j]);
//			c[i][j] = -1;
//			if (a[i][j] == 1) {
//				q.push(make_pair(i, j));
//				c[i][j] = 0;
//			}
//		}
//	}
//	while (!q.empty()) {
//		pair <int, int> p = q.front();
//		int x = q.front().first;
//		int y = q.front().second;
//		q.pop();
//		for (int i = 0; i < 4; i++) {
//			int nx = x + dx[i];
//			int ny = y + dy[i];
//			if (0 <= nx && nx < n && 0 <= ny && ny < m) {
//				if (a[nx][ny] == 0 && c[nx][ny] == -1) {
//					q.push(make_pair(nx, ny));
//					c[nx][ny] = c[x][y] + 1;
//				}
//			}
//		}
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < m; j++) {
//				if (ans < c[i][j]) {
//					ans = c[i][j];
//				}
//			}
//		}
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < m; j++) {
//				if (a[i][j] == 0 && c[i][j] == -1) {
//					ans = -1;
//				}
//			}
//		}
//	}
//	printf("%d", ans);
//	return 0;
//}