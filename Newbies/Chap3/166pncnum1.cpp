#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	int count = 0;

	for (int i = 100; i <= 999; i++) {
		int first = i / 100;
		int second = (i / 10) % 10;
		int third = i % 10;

		if (first > third && (first * second * third) % n == 0) {
			count++;
		}
	}

	cout << count;
}