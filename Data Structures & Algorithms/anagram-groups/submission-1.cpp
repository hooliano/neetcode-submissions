class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> final;
        unordered_map<string, vector<string>> grouped_anagrams;
        for (string word : strs) {
            string word_frequency(26, 0);
            for (char letter : word) {
                word_frequency[letter - 'a']++;
            }
            grouped_anagrams[word_frequency].push_back(word);
        }
        for (auto &entry : grouped_anagrams) {
            final.push_back(entry.second);
        }
        return final;
    }
};
