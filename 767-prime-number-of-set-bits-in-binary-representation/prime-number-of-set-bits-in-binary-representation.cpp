class Solution {
public:
    int countPrimeSetBits(int left, int right) {

        int ans = 0;
        unordered_set<int> p = {2,3,5,7,11,13,17,19};

        for(int i = left; i <= right; i++)
        {
            int cnt = 0;
            int nums = i;

            while(nums > 0)
            {
                if(nums & 1)
                {
                    cnt++;
                }
                nums >>= 1;
            }

            if(p.find(cnt) != p.end())
            {
                ans++;
            }
        }

        return ans;
    }
};