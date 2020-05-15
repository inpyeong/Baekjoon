//#include <iostream>
//#include <string>
//using namespace std;
//int main() {
//	string str;
//	cin >> str;
//	int n = str.length();
//	int next = 0;
//
//	if (n % 3 == 1) {
//		cout << str[0] - '0';
//		next = 1;
//		n -= 1;
//	}
//	if (n % 3 == 2) {
//		cout << (str[0] - '0') * 2 + (str[1] - '0');
//		next = 2;
//		n -= 2;
//	}
//	if (n % 3 == 0) {
//		for (int i = next; i < n; i += 3) {
//			cout << (str[i] - '0') * 4 + (str[i + 1] - '0') * 2 + (str[i + 2] - '0');
//		}
//	}
//	return 0;
//}