#include <vector>

using namespace std;

const int maxPassingCars = 1000000000;

int solution(vector<int> &A) {
    int numPassingCars = 0;
    int numEast = 0;

    for (int car : A) {
        if (car == 0) {
            numEast++;
        } else if (numEast > 0) {
            numPassingCars += numEast;
            if (numPassingCars > maxPassingCars) {
                numPassingCars = -1;
                break;
            }
        }
    }

    return numPassingCars;
}