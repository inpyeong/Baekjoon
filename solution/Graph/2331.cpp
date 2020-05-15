//#include <iostream>
//#include <string>
//#include <cmath>
//using namespace std;
//bool check[1000000];
//int num[1000000];
//int index, p, repeatNum;
//void solution(int x) {
//	if (check[x]) { 
//		repeatNum = x;
//		return; 
//	}
//	check[x] = true;
//	num[index++] = x;
//	string s = to_string(x);
//	int next = 0;
//	for (int i = 0; i < s.size(); i++) {
//		next += pow(s[i] - '0', p);
//	}
//	solution(next);
//}
//int main() {
//	int a;
//	cin >> a >> p;
//	solution(a);
//	int ans = 0;
//	while (num[ans] != repeatNum) {
//		ans++;
//	}
//	cout << ans;
//	return 0;
//}