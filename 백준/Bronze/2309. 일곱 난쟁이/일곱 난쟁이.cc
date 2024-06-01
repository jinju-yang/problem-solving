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
	vector<int> height(9);
	int success = 0;
	int sum = 0;
	for (int i = 0; i < 9; i++) {
		cin >> height[i];
		sum += height[i];
	}

	sort(height.begin(), height.end());

	for (int i = 0; i < 8; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (height[i] + height[j] == sum - 100) {
				height.erase(height.begin() + i);
				j--;
				height.erase(height.begin() + j);
				success++;
				break;
			}
		} if (success != 0) {
			break;
		}
	}

	for (int i = 0; i < 7; i++) {
		cout << height[i] << endl;
	}
	return 0;
}