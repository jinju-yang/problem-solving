#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#define fio ios_base::sync_with_stdio(0), cin.tie(0)
using namespace std;


int main(void) {
	int word[2][26] = { 0 };
	string a, b;
	int count = 0;

	cin >> a >> b;

	for (int i = 0; i < a.length(); i++) {
		word[0][a[i] - 'a']++;
	}

	for (int i = 0; i < b.length(); i++) {
		word[1][b[i] - 'a']++;
	}

	for (int i = 0; i < 26; i++) {
		count += abs(word[0][i] - word[1][i]);
	}

	cout << count;

	return 0;
}
