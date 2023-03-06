int solution(int X, vector<int> &A) {
    vector<int> leaves(X + 1, 0);
    int result = -1;

    for (unsigned i = 0; i < A.size(); i++) {
        if (leaves[A[i]] == 0) {
            leaves[A[i]] = 1;
            X--;
            if (X == 0) {
                result = i;
                break;
            }
        }
    }

    return result;
}