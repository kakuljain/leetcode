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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if (head->next->next == nullptr)
            return {-1, -1};
        ListNode* prev = head;
        ListNode* tmp = head->next;
        vector<int> ans;
        int idx = 1;
        while (tmp->next != nullptr) {
            if ((prev->val < tmp->val && tmp->val > tmp->next->val) ||
                (prev->val > tmp->val && tmp->val < tmp->next->val)) {
                ans.push_back(idx);
            }
            prev = tmp;
            tmp = tmp->next;
            idx++;
        }
        if (ans.size() < 2)
            return {-1, -1};
        int n = ans.size();
        int maxi = ans[n - 1] - ans[0];
        int mini = INT_MAX, m = 0;
        for (int i = 1; i < n; i++) {
            m = ans[i] - ans[i - 1];
            mini = min(mini, m);
        }
        return {mini, maxi};
    }
};