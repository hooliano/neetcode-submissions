#include <unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> num;
        for (int i = 0; i < nums.size(); ++i) {
            num[nums[i]] = i;
        }
        for (int i = 0; i < nums.size(); ++i) {
            if (num.count(target - nums[i]) && (num[target - nums[i]] != i)) {
                return {i, num[target - nums[i]]};
            }
        }
        return {};
    }
};
