#include <string>
#include <stack>

using namespace std;

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