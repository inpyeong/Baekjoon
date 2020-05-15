//#include <iostream>
//#include <queue>
//#include <string>
//using namespace std;
//
//int main10845() {
//	int t, X;
//	cin >> t;
//	string cmd;
//	queue <int> q;
//	while (t--) {
//		cin >> cmd;
//		if (cmd == "push") {
//			cin >> X;
//			q.push(X);
//		}
//		else if (cmd == "pop") {
//			if (q.empty()) {
//				cout << "-1\n";
//				continue;
//			}
//			cout << q.front() << "\n";
//			q.pop();
//		}
//		else if (cmd == "size") {
//			cout << q.size() << "\n";
//		}
//		else if (cmd == "empty") {
//			if (q.empty()) {
//				cout << 1 << "\n";
//			}
//			else {
//				cout << 0 << "\n";
//			}
//		}
//		else if (cmd == "front") {
//			if (q.empty()) {
//				cout << "-1\n";
//				continue;
//			}
//			cout << q.front() << "\n";
//		}
//		else if (cmd == "back") {
//			if (q.empty()) {
//				cout << "-1\n";
//				continue;
//			}
//			cout << q.back() << "\n";
//		}
//	}
//	return 0;
//}