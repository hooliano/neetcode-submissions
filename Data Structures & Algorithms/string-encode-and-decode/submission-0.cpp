class Solution {
public:

    string encode(vector<string>& strs) {
        string result = "";
        for (string str : strs) {
            for (char letter : str) {
                result += (letter + 'a');
            }
            result += "/";
        }
        return result;
    }

    vector<string> decode(string s) {
        vector<string> result;
        string curr_word;
        for (char letter : s) {
            if (letter == '/') {
                result.push_back(curr_word);
                curr_word = "";
            }
            else {
                curr_word += letter - 'a';
            }
        }
        return result;
    }
};
