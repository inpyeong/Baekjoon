//#include <cstdio>
//using namespace std;
//int inorder[100000];
//int postorder[100000];
//int position[100001];
//
//void solve(int inorderLeft, int inorderRight, int postorderLeft, int postorderRight) {
//	if (inorderLeft > inorderRight || postorderLeft > postorderRight) { return; }
//	int root = postorder[postorderRight];
//	int p = position[root];
//	int left = p - inorderLeft;
//
//	printf("%d ", root);
//	solve(inorderLeft, p - 1, postorderLeft, postorderLeft + left - 1);
//	solve(p + 1, inorderRight, postorderLeft + left, postorderRight - 1);
//}
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &inorder[i]);
//	}
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &postorder[i]);
//	}
//	for (int i = 0; i < n; i++) {
//		position[inorder[i]] = i;
//	}
//	solve(0, n - 1, 0, n - 1);
//	return 0;
//}