inline int min (const int& a, const int& b) {
    int result = a;

    if (b < a) {
        result = b;
    }

    return result;
}

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int interDifference = 0;
    int minDifference = -1;
    int leftPartSum = A[0];
    int rightPartSum = 0;
    int N = A.size();

    for (int i = 1; i < N; i++) {
        rightPartSum += A[i];
    }

    minDifference = abs(leftPartSum - rightPartSum);

    if (N > 2) {
        for (int i = 1; i < N - 1; i++) {
            leftPartSum += A[i];
            rightPartSum -= A[i];
            interDifference = abs(leftPartSum - rightPartSum); 
            minDifference = min(minDifference, interDifference);
        }
    }
    

    return minDifference;
}