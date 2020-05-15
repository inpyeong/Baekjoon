//#include <iostream>
//#include <stack>
//using namespace std;
//
//int main10828() {
//	int t;
//	cin >> t;
//	stack <int> s;
//	int givenNum;
//	string str;
//	while (t--) {
//		cin >> str;
//
//		if (str == "push") {
//			cin >> givenNum;
//			s.push(givenNum);
//		}
//		if (str == "pop") {
//			if (s.size() == 0) {
//				cout << "-1\n";
//			}
//			else {
//				cout << s.top() << "\n";
//				s.pop();
//			}
//		}
//		if (str == "size") {
//			cout << s.size() << "\n";
//		}
//		if (str == "empty") {
//			if (s.empty()) {
//				cout << "1\n";
//			}
//			else {
//				cout << "0\n";
//			}
//		}
//		if (str == "top") {
//			if (s.size() == 0) {
//				cout << "-1\n";
//			}
//			else {
//				cout << s.top() << "\n";
//			}
//		}
//	}
//
//	return 0;
//}