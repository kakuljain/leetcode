class Solution {
public:
    bool checkDivisibility(int n) {
        int m=n;
        int product=1;
        int sum=0;
        while(m>0)
        {
            int x=m%10;
            sum+=x;
            product*=x;
            m=m/10;
        }
        if(n%(sum+product)==0) return true;
        return false;
    }
};