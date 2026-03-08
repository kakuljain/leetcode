class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        int n = nums.size();
        unordered_map<int,int> mpp;

        for(int it : nums)
        {
            int rem = ((it % value) + value) % value;
            mpp[rem]++;
        }

        int i = 0;
        while(true)
        {
            int rem = i % value;

            if(mpp[rem] > 0)
            {
                mpp[rem]--;
            }
            else
            {
                return i;
            }

            i++;
        }
    }
};