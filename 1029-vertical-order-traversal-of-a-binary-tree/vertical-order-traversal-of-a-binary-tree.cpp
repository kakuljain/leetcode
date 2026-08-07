/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    void solve(TreeNode* root,
               map<int, map<int, multiset<int>>>& mpp,
               int hd,
               int level)
    {
        if(root == NULL)
            return;

        mpp[hd][level].insert(root->val);

        solve(root->left, mpp, hd - 1, level + 1);
        solve(root->right, mpp, hd + 1, level + 1);
    }

    vector<vector<int>> verticalTraversal(TreeNode* root) {

        vector<vector<int>> ans;

        map<int, map<int, multiset<int>>> mpp;

        solve(root, mpp, 0, 0);

        for(auto &hd : mpp)
        {
            vector<int> temp;

            for(auto &level : hd.second)
            {
                for(auto val : level.second)
                {
                    temp.push_back(val);
                }
            }

            ans.push_back(temp);
        }

        return ans;
    }
};