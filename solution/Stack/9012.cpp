//#include <iostream>
//#include <string>
//#include <stack>
//using namespace std;
//
//int main9012() {
//	int t;
//	cin >> t;
//	stack <char> sc;
//	string str;
//	while (t--) {
//		cin >> str;
//		for (int i = 0; i < str.length(); i++) {
//			if (str[i] == '(') {
//				sc.push(str[i]);
//			}
//			if (str[i] == ')' && sc.empty()) {
//				sc.push(str[i]);
//			}
//			else if (str[i] == ')' && sc.top() == '(') {
//				sc.pop();
//			}
//		}
//
//		if (sc.empty()) {
//			cout << "YES\n";
//		}
//		else {
//			cout << "NO\n";
//		}
//
//		while (!sc.empty()) {
//			sc.pop();
//		}
//	}
//	return 0;
//}