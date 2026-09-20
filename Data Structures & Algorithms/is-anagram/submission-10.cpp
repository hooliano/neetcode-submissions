class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        std::unordered_map<char, int> freqS;
        std::unordered_map<char, int> freqT;

        for (char character : s) {
            freqS[character]++;
        }
        for (char character : t) {
            freqT[character]++;
        }

        if (freqS == freqT) {
            return true;
        }
        return false;

        
    }
};
