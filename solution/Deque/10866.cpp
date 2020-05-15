//#include <iostream>
//#include <deque>
//#include <string>
//
//using namespace std;
//
//int main10866() {
//	int N, X;
//	string cmd;
//	deque <int> dq;
//
//	cin >> N;
//	while (N--) {
//		cin >> cmd;
//		if (cmd == "push_front") {
//			cin >> X;
//			dq.push_front(X);
//		}
//		else if (cmd == "push_back") {
//			cin >> X;
//			dq.push_back(X);
//		}
//		else if (cmd == "pop_front") {
//			if (dq.empty()) {
//				cout << "-1\n";
//				continue;
//			}
//			cout << dq.front() << "\n";
//			dq.pop_front();
//		}
//		else if (cmd == "pop_back") {
//			if (dq.empty()) {
//				cout << "-1\n";
//				continue;
//			}
//			cout << dq.back() << "\n";
//			dq.pop_back();
//		}
//		else if (cmd == "size") {
//			cout << dq.size() << "\n";
//		}
//		else if (cmd == "empty") {
//			if (dq.empty()) {
//				cout << "1\n";
//			}
//			else {
//				cout << "0\n";
//			}
//		}
//		else if (cmd == "front") {
//			if (dq.empty()) {
//				cout << "-1\n";
//				continue;
//			}
//			cout << dq.front() << "\n";
//		}
//		else if (cmd == "back") {
//			if (dq.empty()) {
//				cout << "-1\n";
//				continue;
//			}
//			cout << dq.back() << "\n";
//		}
//	}
//	return 0;
//}