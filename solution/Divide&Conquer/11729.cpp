//#include <cstdio>
//using namespace std;
//void solve(int n, int from, int to) {
//	if (n == 0) return;
//	solve(n - 1, from, 6 - from - to);
//	printf("%d %d\n", from, to);
//	solve(n - 1, 6 - from - to, to);
//}
//int main() {
//	int n;
//	scanf("%d", &n);
//	printf("%d\n", (1 << n) - 1);
//	solve(n, 1, 3);
//	return 0;
//}