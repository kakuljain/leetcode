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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        vector<int> arr;
        vector<int> a;
        unordered_map<int, int> mpp;
        ListNode* temp = head;
        while (temp) {
            arr.push_back(temp->val);
            temp = temp->next;
        }
        for (int i = 0; i < nums.size(); i++) {
            mpp[nums[i]]++;
        }
        for (int j = 0; j < arr.size(); j++) {
            if (mpp.find(arr[j]) == mpp.end()) {
                a.push_back(arr[j]);
            }
        }
        ListNode* head1 = new ListNode(a[0]);
        ListNode* tail = head1;
        for (int i = 1; i < a.size(); i++) {
            tail->next = new ListNode(a[i]);
            tail = tail->next;
        }
        return head1;
    }
};