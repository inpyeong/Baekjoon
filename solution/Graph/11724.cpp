/*#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
using namespace std;

bool check[1001];

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	vector <vector<int>> a(n + 1);
	while (m--) {
		int u, v;
		scanf("%d %d", &u, &v);
		a[u].push_back(v);
		a[v].push_back(u);
	}
	queue <int> q;
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		if (check[i] == false) {
			check[i] = true;
			q.push(i);
			while (!q.empty()) {
				int x = q.front();
				q.pop();
				for (int j = 0; j < a[x].size(); j++) {
					int y = a[x][j];
					if (check[y] == false) {
						check[y] = true;
						q.push(y);
					}
				}
			}
			ans++;
		}
	}
	printf("%d", ans);
	return 0;
}*/