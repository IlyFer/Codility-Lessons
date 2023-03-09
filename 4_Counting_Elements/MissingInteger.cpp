#include <vector>

using namespace std;

const unsigned maxValue = 1000000;

int solution(vector<int> &A) {
    vector<unsigned> foundValues(maxValue + 1, 0);
    unsigned smallestMissing = 0;

    for (int x : A) {
        if (x > 0) {
            foundValues[x] = 1;
        }
    }

    for (unsigned i = 1; i <= maxValue; i++) {
        if (foundValues[i] == 0) {
            smallestMissing = i;
            break;
        }
    }

    return smallestMissing;
}