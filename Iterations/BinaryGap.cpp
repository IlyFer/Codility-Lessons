int max(const int& a, const int& b) {
    int result = a;

    if (b > a) {
        result = b;
    }

    return result;
}

int solution(int N) {
    bool foundOne = false;
    int interGap = 0;
    int result = 0;

    while (N > 0) {
        if (N % 2 == 1) {
            if (!foundOne) {
                foundOne = true;
            } else {
                result = max(result, interGap);
                interGap = 0;
            }    
        } else if (foundOne) {
            interGap++;
        }

        N /= 2;
    }

    return result;
}
