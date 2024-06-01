#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#define fio ios_base::sync_with_stdio(0), cin.tie(0)
using namespace std;

int main(void)
{
	int num;
	int even = 0;
	int sum = 0;
	int min = 100;
	for (int i = 0; i < 7; i++) {
		cin >> num;
		if (num % 2) {
			sum += num;
			if (num < min) {
				min = num;
			}
		}
		else {
			even++;
		}
	}
	if (even == 7) {
		cout << -1 << endl;
	}
	else {
		cout << sum << endl << min;
	}
	return 0;
}