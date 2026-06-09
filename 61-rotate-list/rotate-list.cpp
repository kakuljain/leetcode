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
    ListNode* rotateRight(ListNode* head, int k) {

        if(!head) return head;

        vector<int> arr;
        ListNode* temp = head;

        while(temp){
            arr.push_back(temp->val);
            temp = temp->next;
        }

        int n = arr.size();
        k %= n;

        vector<int> res;

        for(int i=n-k;i<n;i++)
            res.push_back(arr[i]);

        for(int i=0;i<n-k;i++)
            res.push_back(arr[i]);

        ListNode* newHead = new ListNode(res[0]);
        ListNode* curr = newHead;

        for(int i=1;i<n;i++){
            curr->next = new ListNode(res[i]);
            curr = curr->next;
        }

        return newHead;
    }
};