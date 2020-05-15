//#include <cstdio>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main() {
//	int n, m;
//	scanf("%d", &n);
//	vector <int> a(n);
//	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
//	sort(a.begin(), a.end());
//	scanf("%d", &m);
//	for (int i = 0; i < m; i++) {
//		int num;
//		scanf("%d", &num);
//		bool check = false;
//		int left = 0, right = n - 1;
//		while (left <= right) {
//			int mid = (left + right) / 2;
//			if (num == a[mid]) {
//				printf("1 ");
//				check = true;
//				break;
//			}
//			else if (num > a[mid]) left = mid + 1;
//			else right = mid - 1;
//		}
//		if (!check) printf("0 ");
//	}
//	printf("\n");
//	return 0;
//}
