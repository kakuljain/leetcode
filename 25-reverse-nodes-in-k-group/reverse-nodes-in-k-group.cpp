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
    ListNode* reverseKGroup(ListNode* head, int k) {
         if(head == nullptr || k == 1)
            return head;
        ListNode*t1=head;
        ListNode*left=head;
        ListNode*left1=nullptr;
        ListNode*t2=nullptr;
        ListNode*t3=nullptr;int cnt=0;
        while(t1!=nullptr)
        {cnt++;
            if(cnt==k)
            {    left1=t1->next;
            t1->next=nullptr;
               ListNode*tmp=reverse(left);
            
            if(t2==nullptr)
            {
                t2=tmp;
            }
            if(t3!=nullptr)
            {
                t3->next=tmp;
            }
            left->next=left1;
            t3=left;
            left=left1;
            t1=left1;
            cnt=0;
        }
        else 
        {
            t1=t1->next;
        }
        }
        if(t2==nullptr) return head;
        return t2;
    }
};