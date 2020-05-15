//17:10 start
//17:32 finish
//#include <cstdio>
//int main() {
//	int e, s, m;
//	scanf("%d %d %d", &e, &s, &m);
//	if (e == 15) e = 0;
//	if (s == 28) s = 0;
//	if (m == 19) m = 0;
//	int ans = 0;
//	while (true) {
//		ans += 1;
//		bool earthCheck = (ans % 15) == e;
//		bool sunCheck = (ans % 28) == s;
//		bool moonCheck = (ans % 19) == m;
//		if (earthCheck && sunCheck && moonCheck) break;
//	}
//	printf("%d\n", ans);
//	return 0;
//}