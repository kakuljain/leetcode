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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode*temp=head;
        ListNode*t1=head;
        ListNode*f=nullptr;
        ListNode*s=nullptr;
        int cnt=0,cnt1=0;
        while(temp)
        {
            temp=temp->next;
            cnt++;
        }
        while(t1!=nullptr)
        {cnt1++;
            if(cnt1==k)
            {
                f=t1;}
                if(cnt1==cnt-k+1)
                {
                    s=t1;
                   
                }
                t1=t1->next;
        }
            swap(f->val,s->val);
        
        return head;
    }
};