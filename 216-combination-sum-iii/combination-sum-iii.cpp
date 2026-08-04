class Solution {
public:
    void solve(int idx,int k,int n,vector<int>&path,vector<vector<int>>&ans)
    {
        if(path.size()==k)
        {if(n==0)ans.push_back(path);return;}
        
        if (n<0) return;
        for(int i=idx;i<=9;i++)
        {
            path.push_back(i);
            solve(i+1,k,n-i,path,ans);
            path.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>path;
        solve(1,k,n,path,ans);
        return ans;
    }
};