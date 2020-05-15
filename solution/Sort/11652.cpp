/*#include <cstdio>
#include <vector>
#include <utility>
#include <algorithm>
const int MAX = 1000000;
using namespace std;
long long cnt[MAX];
int main11652() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%lld", &cnt[i]);
	}
	sort(cnt, cnt + n);
	for (int i = 0; i < n; i++) {
		printf("%d ", cnt[i]);
	}
	printf("\n");
	int ans = 1, maxAns = 1;
	long long num = cnt[0];
	for (int i = 1; i < n; i++) {
		if (cnt[i] == cnt[i - 1]) {
			ans++;
			if (maxAns < ans) {
				maxAns = ans;
				num = cnt[i];
			}
		}
		else {
			ans = 1;
		}
	}
	printf("%lld", num);
}*/