int solution(int A, int B, int K) {
    int result = 0;

    if (A % K != 0) {
        A = (A / K) * K + K;
    }

    if (B % K != 0) {
        B = (B / K) * K;
    }

    if (B >= A) {
        result = (B / K) - (A / K) + 1;
    }

    return result;
}