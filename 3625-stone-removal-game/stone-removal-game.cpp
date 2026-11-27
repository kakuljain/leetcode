class Solution {
public:
    bool canAliceWin(int n) {
        bool a=true;
       int s=10;
       while(n>=s)
       {n-=s;
       s--;
        a=!a;
       }
       return !a;
    }
};