//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//const char BLANK = ' ';
//const char STAR = '*';
//
//void go(vector <vector<char>> &a, int n, int x, int y, char color) {
//	if (color == BLANK) {
//		for (int i = x; i < x + n; i++) {
//			for (int j = y; j < y + n; j++) {
//				a[x][y] = BLANK;
//			}
//		}
//	} 
//	else {
//		if (n == 1) {
//			a[x][y] = STAR;
//			return;
//		}
//		char newColor = STAR;
//		int m = n / 3;
//		for (int i = 0; i < 3; i++) {
//			for (int j = 0; j < 3; j++) {
//				if (i == 1 && j == 1) {
//					newColor = BLANK;
//				}
//				else {
//					newColor = STAR;
//				}
//				go(a, m, x + i * m, y + j * m, newColor);
//			}
//		}
//	}
//}
//
//int main() {
//	int n;
//	cin >> n;
//	vector <vector<char>> a(n, vector<char>(n, 0));
//	go(a, n, 0, 0, STAR);
//	for (int i = 0; i < n; i++) {
//		cout << string(a[i].begin(), a[i].end()) << endl;
//	}
//	return 0;
//}