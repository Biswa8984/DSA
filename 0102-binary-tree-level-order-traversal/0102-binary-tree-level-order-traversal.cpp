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
        vector<vector<int>> ans;
        if (root == NULL) return ans;

        queue<TreeNode*> qu;
        qu.push(root);

        while (!qu.empty()) {
            int levelSize = qu.size();
            vector<int> level;

            for (int i = 0; i < levelSize; i++) {
                TreeNode* curr = qu.front();
                qu.pop();

                level.push_back(curr->val);

                if (curr->left != NULL)
                    qu.push(curr->left);

                if (curr->right != NULL)
                    qu.push(curr->right);
            }

            ans.push_back(level);
        }

        return ans; 
    }
};