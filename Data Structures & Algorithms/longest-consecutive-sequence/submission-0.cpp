class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (!nums.size()) return 0;

        int longest = 0;
        int curr = 0;
        unordered_set<int> numbers(nums.begin(), nums.end());

        for (int num : nums) {
            int check = num;
            while (numbers.count(++check)) {}
            while (numbers.count(--check)) {
                ++curr;
                numbers.erase(check);
            }
            longest = std::max(curr, longest);
            curr = 0;
        }
        return std::max(curr, longest);
    }
};
