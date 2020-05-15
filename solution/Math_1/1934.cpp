/*#include <iostream>
using namespace std;
int GCD(int a, int b) {
	if (b == 0) {
		return a;
	}
	else {
		return GCD(b, a % b);
	}
}
int LCM(int a, int b, int g) {
	return g * (a / g) * (b / g);
}
int main1934() {
	int t, a, b;
	cin >> t;
	while (t--) {
		cin >> a >> b;
		cout << LCM(a, b, GCD(a, b)) << "\n";
	}
	return 0;
}*/