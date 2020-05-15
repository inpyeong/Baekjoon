//#include <cstdio>
//using namespace std;
//
//int GCD(int a, int b) {
//	if (b == 0) {
//		return a;
//	}
//	else {
//		return GCD(b, a % b);
//	}
//}
//
//int main() {
//	int t, n;
//	scanf("%d", &t);
//	while (t--) {
//		int arr[111];
//		scanf("%d", &n);
//		for (int i = 0; i < n; i++) {
//			scanf("%d", &arr[i]);
//		}
//		long long sum = 0;
//		for (int i = 0; i < n - 1; i++) {
//			for (int j = i + 1; j < n; j++) {
//				sum += GCD(arr[i], arr[j]);
//			}
//		}
//		printf("%lld\n", sum);
//	}
//	return 0;
//}