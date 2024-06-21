#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int odd = 0;
    int even = 0;
    int answer = 0;

    for (int i = 0; i < num_list.size(); i++) {
        if (num_list[i] % 2 != 0) {
            odd = odd * 10 + num_list[i];
        }
        else {
            even = even * 10 + num_list[i];
        }
    }

    answer = odd + even;

    return answer;
}