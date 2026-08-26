class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        queue<Node*> q;
        vector<vector<int>> ans;

        if(root == NULL) return ans;

        q.push(root);

        while(!q.empty())
        {
            vector<int> tmp;
            int n = q.size();

            for(int i = 0; i < n; i++)
            {
                Node* t = q.front();
                q.pop();

                tmp.push_back(t->val);

                for(Node* child : t->children)
                {
                    q.push(child);
                }
            }

            ans.push_back(tmp);
        }

        return ans;
    }
};