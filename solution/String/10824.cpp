//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int getDigit(int N) {
//	int digitOfN = 1;
//	while ((N / 10) != 0) {
//		digitOfN++;
//		N /= 10;
//	}
//	return digitOfN;
//}
//
//int main10824() {
//	int A, B, C, D;
//	long long num1 = 0, num2 = 0, ans;
//	
//	cin >> A >> B >> C >> D;
//	num1 = A * pow(10, getDigit(B)) + B;
//	num2 = C * pow(10, getDigit(D)) + D;
//	ans = num1 + num2;
//	cout << ans;
//
//	return 0;
//}