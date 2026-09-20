class Solution {
public:
    bool isAnagram(string s, string t) {
        std::multiset<char> first(s.begin(), s.end());
        std::multiset<char> second(t.begin(), t.end());
        if (first == second) {
            return true;
        }
        return false;
    }
};
