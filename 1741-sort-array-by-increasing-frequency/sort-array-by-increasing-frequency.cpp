class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> mp;

        
        for(int x : nums) {
            mp[x]++;
        }

        
        vector<pair<int,int>> v(mp.begin(), mp.end());

        sort(v.begin(), v.end(), [](auto &a, auto &b) {
            if(a.second == b.second)
                return a.first > b.first;

            return a.second < b.second;
        });

      
        vector<int> ans;

        for(auto &p : v) {
            int value = p.first;
            int freq = p.second;

            while(freq--) {
                ans.push_back(value);
            }
        }

        return ans;
    }
};