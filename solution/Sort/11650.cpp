//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <utility>
//using namespace std;
//
//bool compare(pair <int, int> p1, pair <int, int> p2) {
//	if (p1.first == p2.first) {
//		return p1.second < p2.second ;
//	}
//	else {
//		return p1 < p2;
//	}
//}
//
//int main11650() {
//	int N;
//	cin >> N;
//	pair <int, int> p;
//	vector <pair <int, int>> v;
//	int a, b;
//	for (int i = 0; i < N; i++) {
//		cin >> a >> b;
//		p = make_pair(a, b);
//		v.push_back(p);
//	}
//	
//	sort(v.begin(), v.end(), compare);
//	for (int i = 0; i < N; i++) {
//		cout << v[i].first << " " << v[i].second << "\n";
//	}
//	return 0;
//}