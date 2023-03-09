inline char matchingCharacter(const char& element) {
    char result = '\0';

    if (element == '(') {
        result = ')';
    } else if (element == '[') {
        result = ']';
    } else {
        result = '}';
    }

    return result;
}

int solution(string &S) {
    // write your code in C++14 (g++ 6.2.0)
    stack<char> stack;
    int result = 1;
    
    for (char x : S) {
        if (x == '(' || x == '[' || x == '{') {
            stack.push(x);
        } else {
            if (stack.empty()) {
                result = 0;
                break;
            } else if (x == matchingCharacter(stack.top())) {
                stack.pop();
            } else {
                result = 0;
                break;
            }
        }
    }

    if (!stack.empty()) {
        result = 0;
    }

    return result;
}