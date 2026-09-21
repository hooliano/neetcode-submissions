class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> my_stack;
        my_stack.push(0);

        for (int i = 1; i < temperatures.size(); ++i) {
            while (!my_stack.empty() && temperatures[i] > temperatures[my_stack.top()]) {
                temperatures[my_stack.top()] = i - my_stack.top();
                my_stack.pop();
            }
            my_stack.push(i);
        }

        while (!my_stack.empty()) {
            temperatures[my_stack.top()] = 0;
            my_stack.pop();
        }
        return temperatures;
    }
};
