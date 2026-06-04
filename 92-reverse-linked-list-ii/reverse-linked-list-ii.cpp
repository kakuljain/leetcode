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
    ListNode*reverse(ListNode*h1)
    {
        ListNode*prev=nullptr;
        ListNode*curr=h1;
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
        ListNode*temp=head;
        ListNode*left1=nullptr;
        ListNode*left2=nullptr;
        ListNode*right1=nullptr;
        ListNode*right2=nullptr;
        int cnt=0;
        while(temp!=nullptr){cnt++;
        if(cnt==left-1)
        {
            left1=temp;
        }
        if(cnt==left)
        {
            left2=temp;
        }
        if(cnt==right)
        {
            right1=temp;
        }
        if(cnt==right+1)
        {
            right2=temp;
        }temp=temp->next;
        }
        right1->next=nullptr;
        ListNode*newhead=reverse(left2);
        if(left1)
        {
            left1->next=newhead;
        }
        else
        {
            head=newhead;
        }
        left2->next=right2;
        return head;
    }
};