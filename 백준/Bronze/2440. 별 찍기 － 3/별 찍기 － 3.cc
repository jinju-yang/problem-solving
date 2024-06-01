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
	int N;
	cin >> N;

	for (int i = N; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}