#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int cal1;
    int cal2;
    cal1 = stoi(to_string(a) + to_string(b));
    cal2 = stoi(to_string(b) + to_string(a));

    if (cal1 > cal2) return cal1;
    else return cal2;
}