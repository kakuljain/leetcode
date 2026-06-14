class Solution {
public:
    void f(int idx,vector<int>& nums,vector<vector<int>>&ans,vector<int>path,vector<int>& used)
    {
        int n=nums.size();
       
        if(path.size()==n)
        {
            ans.push_back(path);
            return;
        }
        for(int i=0;i<n;i++)
        {
            if(used[i]==1)
            {continue;}
            used[i]=1;
        path.push_back(nums[i]);
        f(idx+1,nums,ans,path,used);
        used[i]=0;
        path.pop_back();}
       
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>path;vector<vector<int>>ans; vector<int>used(nums.size(),0);
        f(0,nums,ans,path,used);
        return ans;
    }
};