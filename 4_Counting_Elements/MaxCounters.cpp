#include <vector>

using namespace std;

vector<int> solution(int N, vector<int> &A) {
    vector<int> result(N, 0);
    int set_max_value = 0;
    int max_value = 0;
    int element = 0;

    for (const int operation : A) {
        if (operation == N + 1) {
            set_max_value = max_value;
        } else {
            element = operation - 1;

            if (set_max_value != 0 && set_max_value > result[element]) {
                result[element] = set_max_value + 1;
            } else {
                result[element]++;
            }
            
            if (result[element] > max_value) {
                max_value = result[element];
            }
        }
    }

    if (set_max_value != 0) {
        for (int &val : result) {
            if (val < set_max_value) {
                val = set_max_value;
            }
        }
    }
    
    return result;
}
