#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#include <list>
#include <stack>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	stack<char> brace;
	string laser;
	int count = 0;

	cin >> laser;
	for (int i = 0; i < laser.length(); i++) {
		if (laser[i] == '(') {
			if (laser[i + 1] == ')') {
				count += brace.size();
				i++;
			}
			else brace.push('(');
		}
		else if (laser[i - 1] != '(' && laser[i] == ')') {
			brace.pop();
			count++;
		}
	}

	cout << count;

}