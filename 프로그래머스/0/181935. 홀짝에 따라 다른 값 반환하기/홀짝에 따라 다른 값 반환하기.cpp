#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
	int sum1 = 0;
	int sum2 = 0;
	if (n % 2) {
		for (int i = 1; i <= n; i = i + 2)	sum1 += i;
		return sum1;
	}
	else {
		for (int i = 2; i <= n; i = i + 2) sum2 += pow(i, 2);
		return sum2;
	}
}