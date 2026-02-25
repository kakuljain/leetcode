class Solution {
public:
    
    int countBits(int x) {
        int cnt = 0;
        while (x > 0) {
            if (x & 1)
                cnt++;
            x = x >> 1;
        }
        return cnt;
    }
    
    vector<int> sortByBits(vector<int>& arr) {
        
        sort(arr.begin(), arr.end(), [&](int a, int b) {
            
            int bitsA = countBits(a);
            int bitsB = countBits(b);
            
            if (bitsA == bitsB)
                return a < b;      
            
            return bitsA < bitsB; 
        });
        
        return arr;
    }
};