//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <tuple>
//using namespace std;
//struct Score
//{
//	string name;
//	int k, e, m;
//};
//bool cmp(const Score& s1, const Score& s2) {
//	return make_tuple(-s1.k, s1.e, -s1.m, s1.name) < make_tuple(-s2.k, s2.e, -s1.m, s2.name);
//}
//int main10825() {
//	int n;
//	cin >> n;
//	vector <Score> v(n);
//	for (int i = 0; i < n; i++) {
//		cin >> v[i].name >> v[i].k >> v[i].e >> v[i].m;
//	}
//	sort(v.begin(), v.end(), cmp);
//	for (int i = 0; i < n; i++) {
//		cout << v[i].name << "\n";
//	}
//	return 0;
//}