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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        int cnt=0;
        queue<TreeNode*>q;
        if(root==NULL)return ans;
        q.push(root);
        while(!q.empty())
        {
            vector<int>tmp;
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                TreeNode*t=q.front();
                q.pop();
                tmp.push_back(t->val);
                if(t->left)q.push(t->left);
                if(t->right)q.push(t->right);
                
            }
            if(cnt%2==1) reverse(tmp.begin(),tmp.end());
            ans.push_back(tmp);
            cnt++;
        }
        return ans;
    }
};