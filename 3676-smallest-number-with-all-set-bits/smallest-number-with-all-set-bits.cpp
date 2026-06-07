class Solution {
public:
    int smallestNumber(int n) {
        int s=1;
        while(s<=n)
        {
            s=s*2;
        }
        return s-1;
    }
};