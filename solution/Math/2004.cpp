/*#include <iostream>
#include <algorithm>
using namespace std;
int main2004() {
	long long n, m;
	cin >> n >> m;
	long long up5 = 0;
	long long up2 = 0;
	long long down5 = 0;
	long long down2 = 0;
	for (long long i = 5; i <= n; i *= 5) {
		up5 += n / i;
	}
	for (long long i = 5; i <= n - m; i *= 5) {
		up5 -= (n - m) / i;
	}
	for (long long i = 2; i <= n; i *= 2) {
		up2 += n / i;
	}
	for (long long i = 2; i <= n - m; i *= 2) {
		up2 -= (n - m) / i;
	}
	for (long long i = 5; i <= m; i *= 5) {
		down5 += m / i;
	}
	for (long long i = 2; i <= m; i *= 2) {
		down2 += m / i;
	}
	long long cnt2 = up2 - down2;
	long long cnt5 = up5 - down5;
	cout << min(cnt2, cnt5);
	return 0;
}*/