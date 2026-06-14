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
    int pairSum(ListNode* head) {
        vector<int>a;
        int ans=0;
        ListNode*tmp=head;
        while(tmp)
        {
            a.push_back(tmp->val);
            tmp=tmp->next;
        }
        int n=a.size();
        int i=0,j=n-1;
        while(i<j)
        {
            ans=max(ans,a[i]+a[j]);
            i++;
            j--;
        }
        return ans;
    }
};