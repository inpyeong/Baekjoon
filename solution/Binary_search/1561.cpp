//#include <cstdio>
//using namespace std;
//int n, m;
//int a[10000];
//
//long long binarySearch() {
//	long long left = 0, right = 2000000000LL * 30LL;
//	long long result = -1;
//	while (left <= right) {
//		long long mid = (left + right) / 2;
//		long long children = m;
//		for (int i = 0; i < m; i++) {
//			children += mid / a[i];
//		}
//		if (children >= n) {
//			result = mid;
//			right = mid - 1;
//		}
//		else {
//			left = mid + 1;
//		}
//	}
//	return result;
//}
//
//int main() {
//	scanf("%d %d", &n, &m);
//	for (int i = 0; i < m; i++) {
//		scanf("%d", &a[i]);
//	}
//	if (n <= m) {
//		printf("%d\n", n);
//		return 0;
//	}
//	long long time = binarySearch();
//	long long beforeChildren = m;
//	for (int i = 0; i < m; i++) {
//		beforeChildren += (time - 1) / a[i];
//	}
//	for (int i = 0; i < m; i++) {
//		if (time % a[i] == 0) {
//			beforeChildren += 1;
//		}
//		if (beforeChildren == n) {
//			printf("%d\n", i + 1);
//			break;
//		}
//	}
//	return 0;
//}