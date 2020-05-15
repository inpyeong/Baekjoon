/*#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool compare(string a, string b) {
	if (a[0] > b[0]) {
		return a < b;
	}
	else if (a[0] == b[0]) {
		//return a.length() < b.length();
		int size = (a.length() < b.length()) ? a.length() : b.length();
		int index = 0;
		while (index < size) {
			if (a[index] > b[index]) {
				return a < b;
			}
			index++;
		}
		
	}
}

int main11656() {
	string str;
	cin >> str;
	int strSize = str.length();
	string* arr = new string[strSize];

	for (int i = 0; i < strSize; i++) {
		arr[i] = str.substr(i, strSize);
	}
	
	sort(arr, arr + strSize, compare);
	
	for (int i = 0; i < strSize; i++) {
		cout << arr[i] << "\n";
	}
	return 0;
}*/