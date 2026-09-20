class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }

        std::unordered_map<char, int> first;
        std::unordered_map<char, int> second;

        for (size_t i = 0; i < s.size(); ++i) {
            first[s[i]]++;
            second[t[i]]++;
        }

        return first == second;
    }
};
