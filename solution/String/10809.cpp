//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main10809() {
//	string str;
//	int cnt[26];
//	for (int i = 0; i < 26; i++) {
//		cnt[i] = -1;
//	}
//	
//	cin >> str;
//	for (int i = 0; i < str.length(); i++) {
//		if (cnt[str[i] - 'a'] == -1) 
//			cnt[str[i] - 'a'] = i;
//	}
//	for (int i = 0; i < 26; i++) {
//		cout << cnt[i] << " ";
//	}
//	return 0;
//}