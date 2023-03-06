int solution(vector<int> &A) {
    int isPermutation = 1;
    int N = A.size();
    vector<int> elementOccurence(N + 1, 0);

    for (int x : A) {
        if (x > N) {
            isPermutation = 0;
            break;
        }

        elementOccurence[x]++;
        if (elementOccurence[x] > 1) {
            isPermutation = 0;
            break;
        }
    }

    return isPermutation;
}