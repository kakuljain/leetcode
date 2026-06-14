class Solution {
public:
    void f(int idx, vector<int>& nums, vector<int>&path,vector<vector<int>>&ans)
         {
        
        if (idx == nums.size()) {
             ans.push_back(path);
            return;
        } else {
            path.push_back(nums[idx]);
            f(idx+1,nums,path,ans);
            path.pop_back();
           
            f(idx+1,nums,path,ans);
          

        }
    }
    vector<vector<int>> subsets(vector<int>& nums) { 
         vector<vector<int>>ans;
        vector<int>path;
        f(0, nums,path,ans);
        return ans; 
        }
};