//#include <algorithm>
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main1212() {
//	string s, ans = "";
//	string str;
//	cin >> s;
//	int n = s.size(), temp;
//
//	for (int i = 0; i < n; i++) {
//		str = "";
//		temp = s[i] - '0';
//		if (temp == 0 && n == 1) { str += "0"; }
//		else {
//			while (temp > 0) {
//				str += temp % 2 + '0';
//				temp /= 2;
//			}
//			reverse(str.begin(), str.end());
//			if (i != 0 && str.size() < 3) {
//				for (int j = 0; j < 3 - str.size(); j++) {
//					cout << '0';
//				}
//			}
//		}
//		cout << str;
//	}
//	return 0;
//}