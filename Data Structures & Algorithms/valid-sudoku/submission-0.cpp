class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> rows(board.size());
        vector<unordered_set<char>> cols(board.size());
        vector<unordered_set<char>> squares(board.size());
        for (int i = 0; i < board.size(); ++i) {
            for (int j = 0; j < board[0].size(); ++j) {
                if (board[i][j] != '.') {
                    if (!(rows[i].insert(board[i][j])).second) {
                        return false;
                    }
                    if (!(cols[j].insert(board[i][j])).second) {
                        return false;
                    }
                    if (!(squares[(i/3) * 3 + (j/3)].insert(board[i][j])).second)
                    {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};
