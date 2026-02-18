class Solution {
public:
    bool hasAlternatingBits(int n) {
        
        while(n > 0) {
            
            int last = n & 1;       
            int next = (n >> 1) & 1; 
            
            if(last == next)        
                return false;
            
            n = n >> 1;              
        }
        
        return true;
    }
};
