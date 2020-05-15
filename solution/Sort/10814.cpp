//#include <algorithm>
//#include <iostream>
//#include <vector>
//#include <string>
//#include <utility>
//using namespace std;
//bool cmp(const pair<int, string>& p1, const pair<int, string>& p2) {
//	if (p1.first == p2.first) {
//		return false;
//	}
//	else {
//		return p1.first < p2.first;
//	}
//}
//int main10814() {
//	int n;
//	cin >> n;
//	vector <pair<int, string>> v(n);
//	for (int i = 0; i < n; i++) {
//		cin >> v[i].first >> v[i].second;
//	}
//	stable_sort(v.begin(), v.end(), cmp);
//	for (int i = 0; i < n; i++) {
//		cout << v[i].first << " " << v[i].second << "\n";
//	}
//	return 0;
//}