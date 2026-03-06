class Solution {
public:
    bool checkZeroOnes(string s) {
        
        int one = 0, zero = 0;
        int maxOne = 0, maxZero = 0;

        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '1')
            {
                one++;
                zero = 0;
            }
            else
            {
                zero++;
                one = 0;
            }

            maxOne = max(maxOne, one);
            maxZero = max(maxZero, zero);
        }

        return maxOne > maxZero;
    }
};