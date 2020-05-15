//#include <iostream>
//#include <string>
//using namespace std;
//int firstNum();
//int main() {
//	string s;
//	cin >> s;
//	int ans = 0;
//	int size = s.length();
//	string temp = "";
//	
//	int k;
//	for (k = 0; k < 5; k++) {
//		if (s[k] == '+' || s[k] == '-') { break; }
//		temp += s[k];
//	}
//	ans += stoi(temp);
//
//	int i, j;
//	bool check = true;
//	char sign;
//	for (i = k; i < size; i += j) {
//		temp = "";
//		sign = s[i++];
//		for (j = 0; j < 5; j++) {
//			if (i + j == size) { break; }
//			if (s[i + j] == '+' || s[i + j] == '-') { break; }
//			temp += s[i + j];
//		}
//		if (sign == '+') {
//			if (check == true) {
//				ans += stoi(temp);
//			}
//			if (check == false) {
//				ans -= stoi(temp);
//			}
//		}
//		else if (sign == '-') {
//			check = false;
//			ans -= stoi(temp);
//		}
//	}
//	cout << ans;
//	return 0;
//}