class Solution {
public:
    bool isValid(string s) {
        stack<char> brackets;
        for (char bracket : s) {
            if (bracket == '(' || bracket == '{' || bracket == '[') {
                brackets.push(bracket);
            }
            else {
                if (brackets.empty()) return false;
                else if (bracket == ')' && brackets.top() != '(') return false;
                else if (bracket == '}' && brackets.top() != '{') return false;
                else if (bracket == ']' && brackets.top() != '[') return false;
                else {
                    brackets.pop();
                }
            }
        }
        return brackets.empty();
    }
};
