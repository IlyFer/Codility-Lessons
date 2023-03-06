const int maxRange = 2000001;
const int offset = 1000000;
int solution(vector<int> &A) {
    int result = 0;
    int N = A.size();

    if (N > 0) {
        vector<bool> elementOccurence(maxRange, false);
        for (int x : A) {
            elementOccurence[x + offset] = true;
        }

        for (int i = 0; i < maxRange; i++) {
            if (elementOccurence[i] == true) {
                result++;
            }
        }
    }

    return result;
}
