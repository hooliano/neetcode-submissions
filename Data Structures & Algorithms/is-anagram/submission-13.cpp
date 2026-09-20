#include <vector>

class Solution {
public:
    bool isAnagram(string s, string t) {
        std::vector<int> s_table(26,0);
        std::vector<int> t_table(26,0);

        for (char letter : s) {
            s_table[letter - 'a']++;
        }

        for (char letter : t) {
            t_table[letter - 'a']++;
        }

        return s_table == t_table;
    }
};
