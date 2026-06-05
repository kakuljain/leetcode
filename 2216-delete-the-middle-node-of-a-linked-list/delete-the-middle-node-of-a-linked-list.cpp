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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==nullptr) return nullptr;
        
        ListNode*temp=head;
        int n=0;
        while(temp)
        {
            temp=temp->next;
            n++;
        }
        if(n==1) return nullptr;;
        ListNode*prev=head;
        int cnt=0;
        while(prev)
        { cnt++;
            if(cnt==n/2)
            {
                ListNode*t1=prev->next;
                prev->next=prev->next->next;
                delete(t1);
                break;
            }
            else
            {
                prev=prev->next;
            }
        }
        return head;
    }
};