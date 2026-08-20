class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int>ans;
        vector<int>a1;
        vector<int>a2;
        a1.push_back(nums[0]);
        a2.push_back(nums[1]);
        for(int i=2;i<nums.size();i++)
        {
            if(a1.back()>a2.back())
            {
                a1.push_back(nums[i]);
            }
            else 
            {
                a2.push_back(nums[i]);
            }
        }for(auto it:a1)
        {
            ans.push_back(it);
        }
        for(auto x:a2)
        {
            ans.push_back(x);
        }
        return ans;
    }
};