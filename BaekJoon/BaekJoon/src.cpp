#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <stack>
#include <cmath>

using namespace std;
int arr[1594324];

void rec(int n, int idx) { //idx == Ω√¿€ ¡° idx
	if (n == 0) {
		return;
	}
	else {
		int temp = pow(3, n - 1);
		for (int i = idx + temp; i < idx + temp * 2; i++) {
			arr[i] = 0;
		}
	}

	for (int i = 1; i <= 3; i++) {
		if (i % 2 == 0) {
			// do nothing
		}
		else {
			rec(n - 1, idx + pow(3,n-1)*(i-1));
		}
	}
}

int main() {
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	int n;
	while (cin >> n) {
		

		for (int i = 1; i <= pow(3, n); i++) {
			arr[i] = 1;
		}

		rec(n, 1);

		for (int i = 1; i <= pow(3, n); i++) {
			if (arr[i] == 1) {
				cout << "-";
			}
			else {
				cout << " ";
			}
		}
	}

	
}