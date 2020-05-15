/*#include <iostream>
using namespace std;
int GCD(int a, int b) {
	if (b == 0) {
		return a;
	}
	else {
		return GCD(b, a%b);
	}
}
int LCM(int a, int b, int g) {
	return g * (a / g) * (b / g);
}
int main2609() {
	int a, b;
	cin >> a >> b;
	int gcd = GCD(a, b);
	cout << gcd << "\n" << LCM(a, b, gcd);
	return 0;
}*/