#include <set>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> num(nums.begin(), nums.end());
        return nums.size() != num.size();
    }
};