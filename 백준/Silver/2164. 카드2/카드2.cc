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

	int N;
	queue<int> card;

	cin >> N;

	for (int i = 1; i <= N; i++) {
		card.push(i);
	}

	while (card.size() != 1) {
		card.pop();
		card.push(card.front());
		card.pop();
	}
	cout << card.front();
}