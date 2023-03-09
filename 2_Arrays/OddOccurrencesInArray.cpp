#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> &A) {
    vector<int> B = A;
    int result = 0;

    sort(B.begin(), B.end());
    for (unsigned i = 0; i < A.size() - 1; i+=2) {
        if (B[i] != B[i + 1]) {
            result = B[i];
            break;
        }
    }

    if (result == 0) {
        result = B[B.size() - 1];
    }

    return result;
}