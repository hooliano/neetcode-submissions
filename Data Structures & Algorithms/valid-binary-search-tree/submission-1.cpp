/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    bool isValidBST(TreeNode* root) {
        vector<int> numbers;
        
        lnrSearch(root, numbers);

        for (int i = 1; i < numbers.size(); ++i) {
            if (numbers[i] <= numbers[i-1]) return false;
        }

        return true;
    }

    void lnrSearch(TreeNode* node, vector<int> &numbers) {
        if (node->left) lnrSearch(node->left, numbers);

        numbers.push_back(node->val);

        if (node->right) lnrSearch(node->right, numbers);
    }
};
