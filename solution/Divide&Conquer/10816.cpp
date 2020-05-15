//#include <cstdio>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main() {
//	int n;
//	scanf("%d", &n);
//	vector <int> tempArray(n);
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &tempArray[i]);
//	}
//	sort(tempArray.begin(), tempArray.end());
//	vector <pair<int, int>> a;
//	for (int i = 0; i < n; i++) {
//		a.push_back(make_pair(tempArray[i], 1));
//		if (i == 0) continue;
//		if (a.back().first == tempArray[i - 1]) {
//			a.pop_back();
//			a.back().second += 1;
//		}
//	}
//	int m;
//	scanf("%d", &m);
//	for (int i = 0; i < m; i++) {
//		int num;
//		scanf("%d", &num);
//		bool check = false;
//		int left = 0;
//		int right = a.size();
//		while (left <= right) {
//			int mid = (left + right) / 2;
//			if (num == a[mid].first) {
//				printf("%d ", a[mid].second);
//				check = true;
//				break;
//			}
//			else if (num > a[mid].first) {
//				left = mid + 1;
//			}
//			else {
//				right = mid - 1;
//			}
//		}
//		if (!check) {
//			printf("0 ");
//		}
//	}
//	printf("\n");
//}
