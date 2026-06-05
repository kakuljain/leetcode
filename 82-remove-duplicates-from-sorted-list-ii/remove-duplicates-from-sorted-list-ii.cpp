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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr)
            return nullptr;
        ListNode* temp = head;
        vector<int> arr;
        vector<int> a;
        unordered_map<int, int> mpp;
        while (temp) {
            arr.push_back(temp->val);
            temp = temp->next;
        }
        for (int i = 0; i < arr.size(); i++) {
            mpp[arr[i]]++;
        }
        for (auto it : arr) {
            if (mpp[it] < 2) {
                a.push_back(it);
            }
        }
        if (a.empty())
            return nullptr;
        ListNode* newhead = new ListNode(a[0]);
        ListNode* tail = newhead;
        for (int j = 1; j < a.size(); j++) {
            tail->next = new ListNode(a[j]);
            tail = tail->next;
        }
        return newhead;
    }
};