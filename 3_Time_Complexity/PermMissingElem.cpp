int solution(vector<int> &A) {
    int missingElement = 1;
    int N = A.size();

    if (N > 0) {
        vector<int> elementCounts(N+2, 0);
        for (int element : A) {
            elementCounts[element]++;
        }

        for (int i = 1; i <= N + 1; i++) {
            if (elementCounts[i] == 0) {
                missingElement = i;
                break;
            }
        }
    }
    
    return missingElement;
}
