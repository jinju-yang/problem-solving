#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int cal;
    cal = stoi(to_string(a) + to_string(b));
    if (cal > 2 * a * b) return cal;
    else return 2 * a * b;
}