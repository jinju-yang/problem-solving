#include <string>
#include <vector>

using namespace std;

int solution(int n, string control) {
    int answer = 0;
    int count[4] = { 0 };

    for (int i = 0; i < control.length(); i++) {
        if (control[i] == 'w') {
            count[0]++;
        }
        else if (control[i] == 's') {
            count[1]++;
        }
        else if (control[i] == 'd') {
            count[2]++;
        }
        else if (control[i] == 'a') {
            count[3]++;
        }
    }

    answer = n + count[0] - count[1] + 10 * count[2] - 10 * count[3];

    return answer;
}