int solution(int X, int Y, int D) {
    int result = 0;

    if ((Y - X) % D == 0) {
        result = (Y - X) / D;
    } else {
        result = (Y - X) / D + 1;
    }
    

    return result;
}