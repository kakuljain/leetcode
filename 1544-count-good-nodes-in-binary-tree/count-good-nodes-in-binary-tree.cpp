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
    void solve(TreeNode* root,int &ans,int ma)
    {
        if(root==NULL) return ;
        if(root->val>=ma)
        {   ma=max(ma,root->val);
            ans++; 
           }
        solve(root->left,ans,ma);
        solve(root->right,ans,ma);
    }
    int goodNodes(TreeNode* root) {
        int ans=0;
        int ma=INT_MIN;
        solve(root,ans,ma);
        return ans;
    }
};