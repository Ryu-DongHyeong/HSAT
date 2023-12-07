#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;
bool arr[101][101];

int main() {
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);

	int n;
	int x = 0;
	int y = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> x >> y;
		for (int j = 1; j <= 10; j++) {
			for (int k = 1; k <= 10; k++) {
				arr[x + j][y + k] = 1;
			}
		}
	}

	int ans = 0;

	for (int i = 1; i <= 100; i++) {
		for (int j = 1; j <= 100; j++) {
			if (arr[i][j] == 1) {
				ans++;
			}
		}
	}

	cout << ans;
}