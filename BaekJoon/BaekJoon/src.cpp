#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;
int arr[1000001];
vector<vector<int>> v;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;
	
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		v.push_back({ a,i });
	}
	
	sort(v.begin(), v.end());

	int temp = v[0][0];
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		if (temp == v[i][0]) {
			arr[v[i][1]] = cnt;
		}
		else {
			arr[v[i][1]] = ++cnt;
		}
		temp = v[i][0];
	}

	for (int i = 0; i < N; i++) {
		cout << arr[i] << " ";
	}
}