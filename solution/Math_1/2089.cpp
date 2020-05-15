//#include <algorithm>
//#include <iostream>
//#include <string>
//using namespace std;
//
//string str;
//bool zero;
//
//void solution(int num) {
//	if (num == 0 && zero) {
//		str += '0';
//		return;
//	}
//	else if (num == 0) {
//		return;
//	}
//	else if (num < 0 && (num % 2) != 0) {
//		str += '1';
//		solution(num / (-2) + 1);
//	}
//	else {
//		str += num % (-2) + '0';
//		solution(num / (-2));
//	}
//}
//
//int main2089() {
//	int N;
//	cin >> N;
//	if (N == 0) { zero = true; }
//	solution(N);
//	reverse(str.begin(), str.end());
//	cout << str;
//	return 0;
//}