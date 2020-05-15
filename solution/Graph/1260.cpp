/*#include <cstdio>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

int n;
int a[1001][1001];
queue <int> q;
bool check[1001];

void dfs(int x) {
	check[x] = true;
	printf("%d ", x);
	for (int i = 1; i <= n; i++) {
		if (a[x][i] == 1 && check[i] == false) {
			dfs(i);
		}
	}
}

void bfs(int x) {
	check[x] = true;
	q.push(x);
	while (!q.empty()) {
		int y = q.front();
		q.pop();
		printf("%d ", y);
		for (int i = 1; i <= n; i++) {
			if (a[y][i] == 1 && check[i] == false) {
				check[i] = true;
				q.push(i);
			}
		}
	}
}

int main1260() {
	int m, v;
	scanf("%d %d %d", &n, &m, &v);
	int first, second;
	while (m--) {
		scanf("%d %d", &first, &second);
		a[first][second] = 1;
		a[second][first] = 1;
	}
	dfs(v);
	memset(check, false, n+1);
	printf("\n");
	bfs(v);
	return 0;
}*/