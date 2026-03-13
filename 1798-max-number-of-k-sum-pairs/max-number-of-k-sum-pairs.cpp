class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int count = 0;

        for(int x : nums)
        {
            int y = k - x;

            if(mp[y] > 0)
            {
                count++;
                mp[y]--;
            }
            else
            {
                mp[x]++;
            }
        }

        return count;
    }
};