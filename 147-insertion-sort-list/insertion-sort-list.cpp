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
    ListNode* insertionSortList(ListNode* head) {
        vector<int>arr;
        ListNode*temp=head;
        while(temp)
        {
            arr.push_back(temp->val);
            temp=temp->next;
        }
        sort(arr.begin(),arr.end());
        ListNode*newhead=new ListNode(arr[0]);
        ListNode*tail=newhead;
        for(int i=1;i<arr.size();i++)
        {
            tail->next=new ListNode(arr[i]);
            tail=tail->next;
        }
        return newhead;
    }
};