//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main11655() {
//	string str;
//	getline(cin, str);
//	int strSize = str.size();
//	for (int i = 0; i < strSize; i++) {
//		if (str[i] - 'A' >= 0 && str[i] - 'A' <= 25) { 
//			if (str[i] - 'A' <= 12)
//				str[i] += 13;
//			else
//				str[i] -= 13;
//		}
//		else if (str[i] - 'a' >= 0 && str[i] - 'a' <= 25) {
//			if (str[i] - 'a' <= 12)
//				str[i] += 13;
//			else
//				str[i] -= 13;
//		}
//		else { continue; }
//	}
//	cout << str;
//	return 0;
//}