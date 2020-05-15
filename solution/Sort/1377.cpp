//#include <algorithm>
//#include <cstdio>
//#include <vector>
//using namespace std;
//int main1377() {
//	int n;
//	scanf("%d", &n);
//	vector <pair<int, int>> v(n);
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &v[i].first);
//		v[i].second = i;
//	}
//	sort(v.begin(), v.end());
//	int ans = 0;
//	for (int i = 0; i < n; i++) {
//		if (ans < v[i].second - i) {
//			ans = v[i].second - i;
//		}
//	}
//	printf("%d", ans+1);
//	return 0;
//}