#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#include <list>
#define fio ios_base::sync_with_stdio(0), cin.tie(0)
using namespace std;

int main(void) {
    int N;
    cin >> N;

    while (N--) {
        list<char> L = {};
        auto cursor = L.begin();
        string pswd;

        cin >> pswd;
        for (auto c : pswd) {
            if (c == '<') {
                if (cursor != L.begin()) cursor--;
            }
            else if (c == '>') {
                if (cursor != L.end()) cursor++;
            }
            else if (c == '-') {
                if (cursor != L.begin()) {
                    cursor--;
                    cursor = L.erase(cursor);
                }
            }
            else L.insert(cursor, c);
        }

        for (auto c : L) cout << c;
        cout << "\n";
    }
}