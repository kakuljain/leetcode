/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int>ans;
        stack<Node*>st1;
        stack<Node*>st2;
        if(root==NULL) return ans;
        st1.push(root);
        while(!st1.empty())
        {   Node*t=st1.top();
            st2.push(t);
            st1.pop();
            for(int i=0;i<t->children.size();i++)
            {
                st1.push(t->children[i]);
            }
        

        }
        while(!st2.empty())
        {
            ans.push_back(st2.top()->val);
            st2.pop();
        }
        return ans;
    }
};