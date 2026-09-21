class MinStack {
private:
    vector<pair<int, int>> numbers;
    int stack_top;
    int curr_size;
public:
    MinStack() {
        this->stack_top = -1;
        this->curr_size = 0;
    }
    
    void push(int val) {
        int curr_min;
        if (this->stack_top < 0) {
            curr_min = val;
        }
        else {
            curr_min = std::min(this->numbers[this->stack_top].second, val);
        }

        if (this->curr_size - 1 == this->stack_top) {
            this->numbers.push_back({val, curr_min});
            this->curr_size++;
            this->stack_top++;
        }
        else {
            this->numbers[++this->stack_top] = {val, curr_min};
        }
    }
    
    void pop() {
        this->stack_top--;
    }
    
    int top() {
        return this->numbers[this->stack_top].first;
    }
    
    int getMin() {
        return this->numbers[this->stack_top].second;
    }
};
