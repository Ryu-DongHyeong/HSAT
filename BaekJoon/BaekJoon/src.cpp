#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;
int arr[101];

int main() {
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);

	int N, M;
	cin >> N >> M;
	// N 바구니 개수
	// M 공 넣는 횟수

	for (int i = 1; i <= N; i++) {
		arr[i] = i;
	}

	int x, y;

	for (int i = 1; i <= M; i++) {
		cin >> x >> y;
		int temp = arr[x];
		arr[x] = arr[y];
		arr[y] = temp;
	}

	for (int i = 1; i <= N; i++) {
		cout << arr[i];
	}
}