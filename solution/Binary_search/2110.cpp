//#include <cstdio>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//bool possible(vector <int>& a, int mid, int m) {
//	int cnt = 1;
//	int last = a[0];
//	for (int house : a) {
//		if (house - last >= mid) {
//			last = house;
//			cnt += 1;
//		}
//	}
//	return cnt >= m;
//}
//
//int main() {
//	int n, m;
//	scanf("%d %d", &n, &m);
//	vector <int> a(n);
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &a[i]);
//	}
//	sort(a.begin(), a.end());
//	int l = 0;
//	int r = a[n - 1] - a[0];
//	int ans = 0;
//	while (l <= r) {
//		int mid = (l + r) / 2;
//		if (possible(a, mid, m)) {
//			if (ans < mid) {
//				ans = mid;
//			}
//			l = mid + 1;
//		}
//		else {
//			r = mid - 1;
//		}
//	}
//	printf("%d\n", ans);
//	return 0;
//}