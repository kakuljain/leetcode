/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if (!root)
            return "";
        queue<TreeNode*> q;
        q.push(root);
        string s = "";
        while (!q.empty()) {
            TreeNode* t = q.front();
            q.pop();
            if (t == NULL) {
                s += "NULL,";
            } else {
                s += to_string(t->val) + ",";
                
                    q.push(t->left);
               
                    q.push(t->right);
            }
        }
        return s;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if (data.empty())
            {return NULL;}
        stringstream ss(data);
        string val;
        getline(ss, val, ',');
        TreeNode* t = new TreeNode(stoi(val));
        queue<TreeNode*> q;
        q.push(t);
        while (!q.empty()) {
            TreeNode* curr = q.front();
            q.pop();

            if (!getline(ss, val, ','))
                break;

            if (val != "NULL") {
                curr->left = new TreeNode(stoi(val));
                q.push(curr->left);
            }

            if (!getline(ss, val, ','))
                break;

            if (val != "NULL") {
                curr->right = new TreeNode(stoi(val));
                q.push(curr->right);
            }
        }
        return t;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));