#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#define fio ios_base::sync_with_stdio(0), cin.tie(0)
using namespace std;

int factorial(int a) {
	int sum = 1;
	for (int i = 2; i <= a; i++) {
		sum *= i;
	}
	return sum;
}

int main(void)
{
	int N, K;
	cin >> N >> K;
	cout << factorial(N) / (factorial(K) * factorial(N - K));
	return 0;
}