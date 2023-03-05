enum nested {notProperlyNested = 0, properlyNested};

int solution(string &S) {
    int result = properlyNested;
    string elemStack = "";

    for (char x : S) {
        if (x == '(') {
            elemStack.push_back(x);
        } else {
            if (elemStack.empty()) {
                result = notProperlyNested;
                break;
            }
            elemStack.pop_back();
        }
    }

    if (!elemStack.empty()) {
        result = notProperlyNested;
    }

    return result; 
}