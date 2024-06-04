#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#define fio ios_base::sync_with_stdio(0), cin.tie(0)
using namespace std;

int num[1000001] = { 0 };
int sum[2000001] = { 0 };

int main(void) {
	int n, x, input;
	int count = 0;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> input;
		num[i] = input;
		sum[input]++;
	}

	cin >> x;
	for (int i = 0; i < n; i++) {
		if (x - num[i] > 0 && sum[x - num[i]]) {
			count++;
		}
	}

	cout << count / 2;
	return 0;
}