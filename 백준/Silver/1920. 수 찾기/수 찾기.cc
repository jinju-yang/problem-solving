#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N = 0;
	int M = 0;
	int num = 0;

	cin >> N; 
	vector<int> vec;
	int temp = 0;
	for (int i = 0; i < N; i++) {
		cin >> temp;
		vec.push_back(temp);
	}

	sort(vec.begin(), vec.end());

	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> num;
		if (binary_search(vec.begin(), vec.end(), num)) {
			cout << "1" << "\n";
		}
		else cout << "0" << "\n";
	}
	return 0;
}