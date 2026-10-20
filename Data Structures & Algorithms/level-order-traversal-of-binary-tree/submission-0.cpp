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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (!root) return {};

        int prev_level = -1;
        vector<vector<int>> answer;
        queue<pair<TreeNode*, int>> node_depth;
        node_depth.push({root, 0});

        while (!node_depth.empty()) {
            pair<TreeNode*, int> node = node_depth.front();
            node_depth.pop();
            if (node.second == prev_level) {
                answer[prev_level].push_back((node.first)->val);
            }
            else {
                answer.push_back({(node.first)->val});
                prev_level = node.second;
            }
            if ((node.first)->left) node_depth.push({(node.first)->left, prev_level + 1});
            if ((node.first)->right) node_depth.push({(node.first)->right, prev_level + 1});
        }

        return answer;
    }
};
