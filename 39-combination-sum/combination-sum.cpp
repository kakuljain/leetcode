class Solution {
public:
    void f(int idx,vector<int>& candidates, int target,vector<vector<int>>&ans, vector<int>&path)
    {int n=candidates.size();
    int tmp=target;
    if(target==0){ ans.push_back(path);return ;}
    if(target<0)return;
        if(idx==n)
        {
           
            return;
        }
        path.push_back(candidates[idx]);
        target-=candidates[idx];
        f(idx,candidates,target,ans,path);
        path.pop_back();
        target=tmp;
        f(idx+1,candidates,target,ans,path);

        
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>path;
        f(0,candidates,target,ans,path);
        return ans;
        
    }
};