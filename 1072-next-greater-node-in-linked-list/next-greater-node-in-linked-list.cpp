/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>arr;
        ListNode*tmp=head;
        while(tmp)
        {
            arr.push_back(tmp->val);
            tmp=tmp->next;

        }
        stack<int>st;
        vector<int>ans(arr.size(),0);
        for(int i=0;i<arr.size();i++)
        {
            while(!st.empty()&&arr[st.top()]<arr[i])
            {
                ans[st.top()]=arr[i];
                st.pop();

            }
            st.push(i);
        }
        return ans;
    }
};