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
    void solve(TreeNode* root, long long targetSum, int &ans)
    {
        if(root == NULL)
            return;

        targetSum -= root->val;

        if(targetSum == 0)
            ans++;

        solve(root->left, targetSum, ans);
        solve(root->right, targetSum, ans);
    }

    int pathSum(TreeNode* root, int targetSum) {

        if(root == NULL)
            {return 0;}
        int ans = 0;
        solve(root, targetSum, ans);
        ans += pathSum(root->left, targetSum);
        ans += pathSum(root->right, targetSum);

        return ans;
    }
};