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
    int cnt = 0;

    int recur(TreeNode* cur)
    {
        if(cur == nullptr)
        {
            return -1;
        }
        int lmx = max(cur->val,recur(cur->left));
        int rmx = max(cur->val, recur(cur->right));

        if(cur->val >= lmx && cur->val >= rmx)
        {
            cnt += 1;
        }

        return max(lmx,rmx);
    }

    int countDominantNodes(TreeNode* root) {
        recur(root);
        return cnt;
    }
};