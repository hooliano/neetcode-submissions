class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> unique(nums.begin(), nums.end());
        if (unique.size() == nums.size()) {
            return false;
        }
        return true;
    }
};