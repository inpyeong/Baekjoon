//#include <iostream>
//#include <cstdio>
//#include <cstring>
//#include <string>
//using namespace std;
//char b[111];
//int main() {
//	int n;
//	scanf("%d", &n);
//	int  set = 0;
//	while (n--) {
//		int givenNum = -1;
//		scanf("%s", &b);
//		if (!strcmp(b, "add")) {
//			scanf("%d", &givenNum);
//			set |= (1 << givenNum);
//		}
//		else if (!strcmp(b, "remove")) {
//			scanf("%d", &givenNum);
//			set &= ~(1 << givenNum);
//		}
//		else if (!strcmp(b, "check")) {
//			scanf("%d", &givenNum);
//			if ((set & (1 << givenNum)) != 0) {
//				cout << 1 << "\n";
//			}
//			else {
//				cout << 0 << "\n";
//			}
//		}
//		else if (!strcmp(b, "toggle")) {
//			scanf("%d", &givenNum);
//			set ^= (1 << givenNum);
//		}
//		else if (!strcmp(b, "all")) {
//			set = (1 << 21) - 1;
//		}
//		else if (!strcmp(b, "empty")) {
//			set = 0;
//		}
//	}
//	//cout << set << "\n";
//	return 0;
//}