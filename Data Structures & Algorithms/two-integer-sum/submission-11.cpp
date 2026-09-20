class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, vector<int>> index_map;
        for (int i = 0; i < nums.size(); ++i) {
            index_map[nums[i]].push_back(i);
        }

        for (int num : nums) {
            if (index_map.count(target - num)) {
                if (target - num == num) {
                    if (index_map[num].size() > 1) {
                        return {index_map[num][0], index_map[num][1]};
                    }
                }
                else {
                    int smallest = std::min(index_map[num][0], index_map[target -num][0]);
                    int largest = std::max(index_map[num][0], index_map[target -num][0]);
                    return {smallest, largest};
                }
                
            }
        }
        return {};
    }
};
