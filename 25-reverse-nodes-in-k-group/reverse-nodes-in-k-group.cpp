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
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<int>arr;
        ListNode*temp=head;
        while(temp)
        {
            arr.push_back(temp->val);
            temp=temp->next;
        }int n=arr.size();
        for(int i=0;i+k<=n;i+=k)
        {
            reverse(arr.begin()+i,arr.begin()+i+k);
           
        }
        ListNode*h1=new ListNode(arr[0]);
        ListNode*h2=h1;
        for(int i=1;i<n;i++)
        {
            h2->next=new ListNode(arr[i]);
            h2=h2->next;
        }
        return h1;
    }
};