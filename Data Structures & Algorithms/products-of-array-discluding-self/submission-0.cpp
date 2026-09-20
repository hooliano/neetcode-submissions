class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefixes(nums.size());
        int prefix = 1;
        int postfix = 1;
        for (int i = 0; i < nums.size(); ++i) {
            if (i > 0) {
                prefix *= nums[i - 1];
            }
            prefixes[i] = prefix;
        }
        for (int i = nums.size() - 1; i >= 0; --i) {
            if (i < nums.size() - 1) {
                postfix *= nums[i + 1];
            }
            prefixes[i] *= postfix;
        }
        return prefixes;
    }
};
