class Solution {
public:
    string getPermutation(int n, int k) {
        
        vector<int> v;
        int fact = 1;

        for(int i = 1; i <= n; i++)
        {
            v.push_back(i);
            if(i < n) fact *= i;   
        }

        k--; 
        string ans = "";

        while(v.size() > 0)
        {
            int idx = k / fact;
            ans += to_string(v[idx]);

            v.erase(v.begin() + idx);

            if(v.size() == 0) break;

            k = k % fact;
            fact = fact / v.size();
        }

        return ans;
    }
};