//#include <iostream>
//using namespace std;
//
//int main1924() {
//	int month, day;
//	cin >> month >> day;
//
//	int numOfDays[12] = { 0,
//		31,
//		31 + 28,
//		31 + 28 + 31,
//		31 + 28 + 31 + 30,
//		31 + 28 + 31 + 30 + 31,
//		31 + 28 + 31 + 30 + 31 + 30,
//		31 + 28 + 31 + 30 + 31 + 30 + 31,
//		31 + 28 + 31 + 30 + 31 + 30 + 31 + 31,
//		31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30,
//		31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31,
//		31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30,
//	};
//
//	if ((numOfDays[month - 1] + day) % 7 == 0)
//		cout << "SUN";
//	else if ((numOfDays[month - 1] + day) % 7 == 1)
//		cout << "MON";
//	else if ((numOfDays[month - 1] + day) % 7 == 2)
//		cout << "TUE";
//	else if ((numOfDays[month - 1] + day) % 7 == 3)
//		cout << "WED";
//	else if ((numOfDays[month - 1] + day) % 7 == 4)
//		cout << "THU";
//	else if ((numOfDays[month - 1] + day) % 7 == 5)
//		cout << "FRI";
//	else if ((numOfDays[month - 1] + day) % 7 == 6)
//		cout << "SAT";
//	return 0;
//}