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
    int result = 1;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        result = result * i;
    }
    cout << result;
}