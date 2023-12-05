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
		int sum_temp = x + y;
		int cha_temp = (y - x + 1) / 2;
		for (int j = 0; j < cha_temp; j++) {
			int temp = arr[x + j];
			arr[x + j] = arr[sum_temp - x - j];
			arr[sum_temp - x - j] = temp;
		}
	}

	for (int i = 1; i <= N; i++) {
		cout << arr[i]<<" ";
	}
}