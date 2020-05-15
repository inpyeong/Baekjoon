//#include <iostream>
//#include <stack>
//#include <string>
//using namespace std;
//
//int main10799() {
//	string str;
//	cin >> str;
//	stack <int> s;
//	int ans = 0;
//
//	for (int index = 0; index < str.length(); index++) {
//		if (str[index] == '(') {
//			s.push(index);
//		}
//		if (str[index] == ')') {
//			if (index == s.top() + 1) {
//				s.pop();
//				ans += s.size();
//			}
//			else {
//				s.pop();
//				ans += 1;
//			}
//		}
//	}
//	cout << ans;
//	return 0;
//}