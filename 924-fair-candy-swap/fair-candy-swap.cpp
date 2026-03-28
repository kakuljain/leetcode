class Solution {
public:
    vector<int> fairCandySwap(vector<int>& alice, vector<int>& bob) {
        
        int sumA = 0, sumB = 0;
        
        for(int i = 0; i < alice.size(); i++)
            sumA += alice[i];
            
        for(int i = 0; i < bob.size(); i++)
            sumB += bob[i];
        
        int diff = (sumB - sumA) / 2;
        
        unordered_set<int> s;
        for(int x : bob)
            s.insert(x);
        
        for(int i = 0; i < alice.size(); i++)
        {
            int need = alice[i] + diff;
            
            if(s.count(need))
                return {alice[i], need};
        }
        
        return {};
    }
};