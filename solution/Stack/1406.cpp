//#include <iostream>
//#include <string>
//#include <stack>
//using namespace std;
//
//int main1406() {
//	string str;
//	int t;
//	cin >> str >> t;
//	stack <char> leftS;
//	stack <char> rightS;
//	for (int i = 0; i < str.length(); i++) {
//		leftS.push(str[i]);
//	}
//	char cmd, tempChr, $;
//	while (t--) {
//		cin >> cmd;
//		if (cmd == 'L') {
//			if (leftS.empty()) {
//				continue;
//			}
//			tempChr = leftS.top();
//			leftS.pop();
//			rightS.push(tempChr);
//		}
//		else if (cmd == 'D') {
//			if (rightS.empty()) {
//				continue;
//			}
//			tempChr = rightS.top();
//			rightS.pop();
//			leftS.push(tempChr);
//		}
//		else if (cmd == 'B') {
//			if (leftS.empty()) {
//				continue;
//			}
//			leftS.pop();
//		}
//		else if (cmd == 'P') {
//			cin >> $;
//			leftS.push($);
//		}
//	}
//	int leftSSize = leftS.size();
//	int rightSSize = rightS.size();
//	char* ans = new char[leftSSize + rightSSize];
//	for (int i = leftSSize - 1; i >= 0; i--) {
//		ans[i] = leftS.top();
//		leftS.pop();
//	}
//	for (int i = leftSSize; i <= leftSSize + rightSSize - 1; i++) {
//		ans[i] = rightS.top();
//		rightS.pop();
//	}
//	for (int i = 0; i < leftSSize + rightSSize; i++) {
//		cout << ans[i];
//	}
//	return 0;
//}