class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> final;
        vector<vector<int>> buckets(nums.size() + 1);
        unordered_map<int, int> frequency_map;
        for (int num : nums) {
            frequency_map[num]++;
        }
        for (auto &entry : frequency_map) {
            buckets[entry.second].push_back(entry.first);
        }
        for (int i = buckets.size() - 1; i >= 0; --i) {
            for (int num : buckets[i]) {
                if (final.size() < k) {
                    final.push_back(num);
                }
            }
        }
        return final;
    }
};
