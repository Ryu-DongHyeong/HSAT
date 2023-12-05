#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;
	int cnt = N / 4;
	for (int i = 1; i <= cnt; i++) {
		cout << "long ";
	}
	cout << "int";
}