#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int square = 0;
    int mul = 1;

    for (int i = 0; i < num_list.size(); i++) {
        mul *= num_list[i];
        square += num_list[i];
    }
    
    square = pow(square, 2);

    if (mul < square) {
        return 1;
    }
    else return 0;
}