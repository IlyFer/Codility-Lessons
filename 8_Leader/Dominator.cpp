#include <vector>

using namespace std;

int solution(vector<int> &A) {
    int result = -1;
    int size = 0;
    int candidate;

    for (int x : A) {
        if (size == 0) {
            size++;
            candidate = x;
        } else if (x != candidate) {
            size--;
        } else {
            size++;
        }
    }

    if (size > 0) {
        int index = -1;
        unsigned count = 0;
        for (unsigned i = 0; i < A.size(); i++) {
            if (A[i] == candidate) {
                index = i;
                count++;
            }
        }

        if (count > A.size() / 2) {
            result = index;
        }
        
    }

    return result;
}