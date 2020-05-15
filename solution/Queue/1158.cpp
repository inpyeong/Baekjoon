//#include <iostream>
//#include <queue>
//using namespace std;
//
//int main1158() {
//	int N, K;
//	queue <int> q;
//	cin >> N >> K;
//	for (int i = 1; i <= N; i++) {
//		q.push(i);
//	}
//	int *ans = new int[N];
//	int ansIndex = 0, temp;
//
//	while (!q.empty()) {
//		for (int i = 0; i < K - 1; i++) {
//			temp = q.front();
//			q.pop();
//			q.push(temp);
//		}
//		ans[ansIndex++] = q.front();
//		q.pop();
//	}
//	cout << "<";
//	for (int i = 0; i < N - 1; i++) {
//		cout << ans[i] << ", ";
//	}
//	cout << ans[N - 1] << ">";
//	return 0;
//}