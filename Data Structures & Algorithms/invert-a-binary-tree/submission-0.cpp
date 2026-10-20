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
    TreeNode* invertTree(TreeNode* root) {
        if (root == nullptr) return nullptr;
        if (!root->left && !root->right) return root;

        invertNode(root);

        return root;
    }

    void invertNode(TreeNode* curr) {
        if (curr->left) invertNode(curr->left);
        if (curr->right) invertNode(curr->right);

        swap(curr->left, curr->right);
    }
};
