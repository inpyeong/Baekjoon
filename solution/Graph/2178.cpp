//#include <cstdio>
//#include <queue>
//using namespace std;
//
//int a[100][100];
//int c[100][100];
//int dx[] = {0, 0, 1, -1};
//int dy[] = { 1, -1, 0, 0 };
//queue <pair<int, int>> q;
//int n, m, ans;
//
//void bfs() {
//	c[0][0] = 1;
//	q.push(make_pair(0, 0));
//	while (!q.empty()) {
//		pair <int, int> p = q.front();
//		q.pop();
//		printf("%d %d\n", p.first, p.second);
//		for (int i = 0; i < 4; i++) {
//			int nx = p.first + dx[i];
//			int ny = p.second + dy[i];
//			if (0 <= nx && nx < n && 0 <= ny && ny < m) {
//				if (a[nx][ny] == 1 && c[nx][ny] == 0) {
//					q.push(make_pair(nx, ny));
//					c[nx][ny] = c[p.first][p.second] + 1;
//				}
//			}
//		}
//	}
//}
//
//int main() {
//	scanf("%d %d", &n, &m);
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			scanf("%1d", &a[i][j]);
//		}
//	}
//	bfs();
//	printf("%d", c[n - 1][m - 1]);
//	return 0;
//}