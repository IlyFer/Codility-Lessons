#include <vector>

using namespace std;

const int upperLimit = 1001;
const int lowerLimit = -1001;

inline int max (const int& a, const int& b) {
    int result = a;

    if (b > a) {
        result = b;
    }

    return result;
}

int solution (vector<int> &A) {
    int result = 0;
    int max1 = lowerLimit;
    int max2 = lowerLimit;
    int max3 = lowerLimit;
    int min1 = upperLimit;
    int min2 = upperLimit;

    for (int x : A) {
        if (x > max1) {
            max3 = max2;
            max2 = max1;
            max1 = x;
        } else if (x > max2) {
            max3 = max2;
            max2 = x;
        } else if (x > max3) {
            max3 = x;
        }

        if (x < min1) {
            min2 = min1;
            min1 = x;
        } else if (x < min2) {
            min2 = x;
        }
    }

    result = max(max1 * max2 * max3, min1 * min2 * max1);

    return result;
}
