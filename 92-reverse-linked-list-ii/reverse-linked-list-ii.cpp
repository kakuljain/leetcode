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
    ListNode*reverse(ListNode*start)
    {
        ListNode*prev=nullptr;
        ListNode*curr=start;
        while(curr)
        {
            ListNode*nextnode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextnode;
        }
        return prev;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* temp = head;
        ListNode* leftbefore = nullptr;
        ListNode* leftnode = nullptr;
        ListNode* rightnode = nullptr;
        ListNode* rightafter = nullptr;

        int cnt = 0;

        while (temp != nullptr) {
            cnt++;

            if (cnt == left - 1)
                leftbefore = temp;

            if (cnt == left)
                leftnode = temp;

            if (cnt == right)
                rightnode = temp;

            if (cnt == right + 1)
                rightafter = temp;

            temp = temp->next;
        }
        rightnode->next=nullptr;
        ListNode*newhead=reverse(leftnode);
        if(leftbefore)
        {
            leftbefore->next=newhead;
        }
        else
        {
            head=newhead;
        }
        leftnode->next=rightafter;
        return head;
    }
};