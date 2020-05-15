//#include <algorithm>
//#include <iostream>
//#include <vector>
//#include <queue>
//#include <cstring>
//using namespace std;
//const int MAX = 100001;
//vector <pair<int, int>> a[MAX];
//int d[MAX];
//bool check[MAX];
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		int u;
//		cin >> u;
//		while (true) {
//			int v, dist;
//			cin >> v;
//			if (v == -1) { break; }
//			cin >> dist;
//			a[u].push_back(make_pair(v, dist));
//		}
//	}
//	queue <int> q1;
//	check[1] = true;
//	q1.push(1);
//	while (!q1.empty()) {
//		int x = q1.front();
//		q1.pop();
//		for (auto y : a[x]) {
//			if (check[y.first] == false) {
//				d[y.first] += d[x] + y.second;
//				q1.push(y.first);
//				check[y.first] = true;
//			}
//		}
//	}
//	int start = 1;
//	for (int i = 1; i <= n; i++) {
//		if (d[start] < d[i]) {
//			start = i;
//		}
//	}
//	memset(d, 0, sizeof(d));
//	memset(check, false, sizeof(check));
//	queue <int> q2;
//	q2.push(start);
//	check[start] = true;
//	while (!q2.empty()) {
//		int x = q2.front();
//		q2.pop();
//		for (auto y : a[x]) {
//			if (check[y.first] == false) {
//				d[y.first] += d[x] + y.second;
//				q2.push(y.first);
//				check[y.first] = true;
//			}
//		}
//	}
//	int ans = d[1];
//	for (int i = 2; i <= n; i++) {
//		if (ans < d[i]) {
//			ans = d[i];
//		}
//	}
//	cout << ans;
//	return 0;
//}