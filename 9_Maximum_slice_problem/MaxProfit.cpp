#include <vector>

using namespace std;

inline int min(int a, int b) {
    if (a < b) {
        return a;
    }
    
    return b;
}

inline int max(int a, int b) {
    if (a > b) {
        return a;
    }
    
    return b;
}

int solution(vector<int> &A) {
    int max_profit = 0;
    int min_val = 0;

    if (A.size() != 0 && A.size() != 1) {
        min_val = min(A[0], A[1]);
        for (unsigned i = 1; i < A.size(); i++) {
            if (A[i] < min_val) {
                min_val = A[i];
            } else {
                max_profit = max(max_profit, A[i] - min_val);
            }
        }
    }

    return max_profit;
}
