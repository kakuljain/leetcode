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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
     int n = 0;
ListNode* temp = head;

while(temp)
{
    n++;
    temp = temp->next;
}

int base = n / k;
int extra = n % k;

vector<ListNode*> ans(k);
temp = head;

for(int i = 0; i < k; i++)
{
    ans[i] = temp;

    int sz = base;
    if(extra > 0)
    {
        sz++;
        extra--;
    }

    for(int j = 1; j < sz && temp; j++)
    {
        temp = temp->next;
    }

    if(temp)
    {
        ListNode* nxt = temp->next;
        temp->next = nullptr;
        temp = nxt;
    }

}
return ans;  
    }
};