//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//vector <int> a[100001];
//int d[100001];
//queue <int> q;
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 0; i < n - 1; i++) {
//		int u, v;
//		cin >> u >> v;
//		a[u].push_back(v);
//		a[v].push_back(u);
//	}
//	int distance = 0;
//	q.push(1);
//	while (!q.empty()) {
//		int x = q.front();
//		q.pop();
//		for (int i = 0; i < a[x].size(); i++) {
//			int y = a[x][i];
//			if (d[y] == 0 && y != 1) {
//				d[y] = d[x] + 1;
//				q.push(y);
//			}
//		}
//	}
//	for (int i = 2; i <= n; i++) {
//		for (int j = 0; j < a[i].size(); j++) {
//			if (d[a[i][j]] - d[i] == (-1)) {
//				cout << a[i][j];
//				break;
//			}
//		}
//		cout << "\n";
//	}
//	return 0;
//}