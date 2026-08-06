class Solution {
public:
    int smallestNumber(int n, int t) {
        int i=n;
       
        while(true)
        { int z=1;
        int x=i;
            while(x>0)
            {
               z*=(x%10);
               x/=10; 
            }
            if(z%t==0) return i;
            i++;
        }
        return -1;
    }
};