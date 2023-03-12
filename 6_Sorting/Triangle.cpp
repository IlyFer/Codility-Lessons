#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> &A) {
    int result = 0;
    vector<int> B = A;
    sort(B.begin(), B.end());

    if (B.size() > 2) {
        long P, Q, R;
        for (unsigned i = 0; i < B.size() - 2; i++) {
            P = B[i];
            Q = B[i + 1];
            R = B[i + 2];
            if (P + Q > R && Q + R > P
                && R + P > Q) {
                result = 1;
                break;
            }
        }
    }
    

    return result;
}