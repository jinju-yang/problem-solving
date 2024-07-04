#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#define X first
#define Y second
using namespace std;

int board[502][502] = { 0,  };
bool vis[502][502] = { 0,  };
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
int n, m;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int count = 0;
	int maxArea = 0;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) cin >> board[i][j];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (board[i][j] == 0 || vis[i][j]) continue;
			queue<pair<int, int> > paint;
			int area = 1;
			vis[i][j] = 1;
			paint.push({ i, j });

			while (!paint.empty()) {
				pair<int, int> cur = paint.front(); paint.pop();
				for (int dir = 0; dir < 4; dir++) {
					int nx = cur.X + dx[dir];
					int ny = cur.Y + dy[dir];
					if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
					if (vis[nx][ny] || board[nx][ny] != 1) continue;
					vis[nx][ny] = 1;
					++area;
					paint.push({ nx, ny });
				}
			}
			count++;
			maxArea = max(maxArea, area);
		}
	}
	cout << count << "\n" << maxArea;

}