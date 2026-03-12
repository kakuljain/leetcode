class Solution {
public:
    string frequencySort(string s) {
        
        unordered_map<char,int> mpp;

        for(char c : s)
        {
            mpp[c]++;
        }

        vector<pair<char,int>> v;

        for(auto it : mpp)
        {
            v.push_back(it);
        }

        sort(v.begin(), v.end(), [](auto &a, auto &b){
            return a.second > b.second;
        });

        string ans = "";

        for(auto it : v)
        {
            for(int i = 0; i < it.second; i++)
            {
                ans += it.first;
            }
        }

        return ans;
    }
};