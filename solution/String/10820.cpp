//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main10820() {
//	string str; 
//	int upper = 0;
//	int lower = 0;
//	int num = 0;
//	int space = 0;
//
//	while (getline(cin, str)) {
//		for (int i = 0; i < str.length(); i++) {
//			if (str[i] - 'A' >= 0 && str[i] - 'A' <= 25) { upper++; }
//			else if (str[i] - 'a' >= 0 && str[i] - 'a' <= 25) { lower++; }
//			else if (str[i] - ' ' == 0) { space++; }
//			else if (str[i] - '0' >= 0 && str[i] - '0' <= 9) { num++; }
//		}
//		cout << lower << " " << upper << " " << num << " " << space << "\n";
//		upper = 0, lower = 0, num = 0, space = 0;
//	}
//	return 0;
//}