class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> numbers(nums.begin(), nums.end());
        return numbers.size() != nums.size();
    }
};