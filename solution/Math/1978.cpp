//#include <iostream>
//using namespace std;
//
//int main1978() {
//	int N, num;
//	bool check = false;
//	cin >> N;
//	int cnt = 0;
//	for (int i = 0; i < N; i++) {
//		cin >> num;
//		if (num < 2) {
//			check = true;
//		}
//		else {
//			for (int j = 2; j * j <= num; j++) {
//				if (num % j == 0) {
//					check = true;
//					break;
//				}
//			}
//		}
//		if (check) { 
//			check = false;
//			continue; 
//		}
//		else { cnt++; }
//	}
//	cout << cnt;
//	return 0;
//}