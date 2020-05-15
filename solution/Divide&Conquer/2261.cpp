//#include <cstdio>
//#include <vector>
//#include <algorithm>
//using namespace std;
//struct Point {
//	int x, y;
//	Point() {
//	}
//	Point(int x, int y) : x(x), y(y) {
//	}
//	bool operator < (const Point& v) const {
//		if (x == v.x) {
//			return y < v.y;
//		} else {
//			return x < v.x;
//		}
//	}
//};
//bool cmp(const Point& p1, const Point& p2) {
//	return p1.y < p2.y;
//}
//int dist(Point p1, Point p2) {
//	return (p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y);
//}
//int brute_force(vector <Point>& a, int x, int y) {
//	int min_d = -1;
//	for (int i = x; i < y; i++) {
//		for (int j = i + 1; j <= y; j++) {
//			int d = dist(a[i], a[j]);
//			if (min_d == -1 || min_d > d) {
//				min_d = d;
//			}
//		}
//	} 
//	return min_d;
//}
//int closest(vector <Point>& a, int x, int y) {
//	int n = y - x + 1;
//	if (n <= 3) {
//		return brute_force(a, x, y);
//	}
//	int mid = (x + y) / 2;
//	int left = closest(a, x, mid);
//	int right = closest(a, mid + 1, y);
//	int ans = min(left, right);
//	for (int i = x; i <= y; i++) {
//		if (i == mid) {
//			continue;
//		}
//		int d = dist(a[i], a[mid]);
//		if (ans > d) {
//			ans = d;
//		}
//	}
//	return ans;
//}
//int main() {
//	int n;
//	scanf("%d", &n);
//	vector <Point> a(n);
//	for (int i = 0; i < n; i++) {
//		scanf("%d %d", &a[i].x, &a[i].y);
//	}
//	sort(a.begin(), a.end());
//	printf("%d", closest(a, 0, n - 1));
//	return 0;
//}