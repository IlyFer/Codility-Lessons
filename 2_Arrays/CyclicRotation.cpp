vector<int> solution(vector<int> &A, int K) {
    int N = A.size();

    if (N > 1 && K > 0 && K % N != 0) {
        vector<int> B = A;
        int rotationTimes = K % N;

        for (int i = 0; i < N - rotationTimes; i++) {
            A[i + rotationTimes] = B[i];
        }

        for (int i = N - rotationTimes; i < N; i++) {
           A[i - (N - rotationTimes)] = B[i];
        }
    }

    return A;
}
