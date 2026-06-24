class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char, int> mpp;
        priority_queue<pair<int, char>> pq;
        pair<int, char> prev;
        string ans = "";
        for (auto it : s) {
            mpp[it]++;
        }
        for (auto it : mpp) {
            pq.push({it.second, it.first});
        }
        while (!pq.empty()) {
            auto top = pq.top();
            pq.pop();
            ans += top.second;
            top.first--;

            if (prev.first > 0) {
                pq.push(prev);
            }
            prev = top;
        }
        if (ans.size() != s.size()) {
            return "";
        }
        return ans;
    }
};