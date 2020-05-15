//#include <cstdio>
//#include <cstring>
//using namespace std;
//
//int a[50][50];
//bool c[50][50];
//int dx[] = { 0, 0, 1, -1, -1, 1, -1, 1 };
//int dy[] = { 1, -1, 0, 0, -1, -1, 1, 1 };
//int w, h;
//
//void dfs(int x, int y) {
//	c[x][y] = true;
//	for (int k = 0; k < 8; k++) {
//		int nx = x + dx[k];
//		int ny = y + dy[k];
//		if (0 <= nx && nx < h && 0 <= ny && ny < w) {
//			if (a[nx][ny] == 1 && c[nx][ny] == false) {
//				dfs(nx, ny);
//			}
//		}
//	}
//}
//
//int main() {
//	while (true) {
//		scanf("%d %d", &w, &h);
//		if (w == 0 && h == 0) {	
//			break;
//		}
//		for (int i = 0; i < 50; i++) {
//			for (int j = 0; j < 50; j++) {
//				c[i][j] = false;
//				a[i][j] = 0;
//			}
//		}
//		for (int i = 0; i < h; i++) {
//			for (int j = 0; j < w; j++) {
//				scanf("%d",&a[i][j]);
//			}
//		}
//		int ans = 0;
//		for (int i = 0; i < h; i++) {
//			for (int j = 0; j < w; j++) {
//				if (a[i][j] == 1 && c[i][j] == false) {
//					dfs(i, j);
//					ans += 1;
//				}
//			}
//		}
//		printf("%d\n", ans);
//	}
//	return 0;
//}