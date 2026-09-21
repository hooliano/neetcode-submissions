class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> curr_stack;
        for (string node : tokens) {
            if (node == "+") {
                int num1 = std::stoi(curr_stack.top());
                curr_stack.pop();
                int num2 = std::stoi(curr_stack.top());
                curr_stack.pop();
                curr_stack.push(std::to_string(num1 + num2));
            }
            else if (node == "-") {
                int num1 = std::stoi(curr_stack.top());
                curr_stack.pop();
                int num2 = std::stoi(curr_stack.top());
                curr_stack.pop();
                curr_stack.push(std::to_string(num2 - num1));
            }
            else if (node == "*") {
                int num1 = std::stoi(curr_stack.top());
                curr_stack.pop();
                int num2 = std::stoi(curr_stack.top());
                curr_stack.pop();
                curr_stack.push(std::to_string(num1 * num2));
            }
            else if (node == "/") {
                int num1 = std::stoi(curr_stack.top());
                curr_stack.pop();
                int num2 = std::stoi(curr_stack.top());
                curr_stack.pop();
                curr_stack.push(std::to_string(num2 / num1));
            }
            else {
                curr_stack.push(node);
            }
        }
        return stoi(curr_stack.top());
    }
};
