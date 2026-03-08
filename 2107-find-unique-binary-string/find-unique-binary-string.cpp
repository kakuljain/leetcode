class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums.size();
        unordered_map<string,int> mpp;

        for(string it : nums)
        {
            mpp[it]++;
        }

        for(int i = 0; i < (1<<n); i++)
        {
            string s = "";
            int x = i;

            for(int j = 0; j < n; j++)
            {
                if(x % 2) s = '1' + s;
                else s = '0' + s;
                x /= 2;
            }

            if(mpp.find(s) == mpp.end())
            {
                return s;
            }
        }

        return "";
    }
};