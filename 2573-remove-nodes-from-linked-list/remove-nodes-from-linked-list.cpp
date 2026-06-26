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
    ListNode* removeNodes(ListNode* head) {
        vector<int> arr;
        ListNode* tmp = head;
        while (tmp) {
            arr.push_back(tmp->val);
            tmp = tmp->next;
        }

        int n = arr.size();
        vector<int> ans;
        ans.push_back(arr[n - 1]);

        int maxi = arr[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] >= maxi) {
                ans.push_back(arr[i]);
                maxi = arr[i];
            }
        }
        reverse(ans.begin(), ans.end());
        ListNode* temp = new ListNode(ans[0]);
         ListNode* tail = temp;
        for (int i = 1; i < ans.size(); i++) {
            tail->next = new ListNode(ans[i]);
            tail = tail->next;
        }
        return temp;
    }
};