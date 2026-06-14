class Solution {
public:
    void f( int idx,int n, int k,vector<vector<int>>&ans, vector<int>&path)
        {
            if(path.size()==k)
            {
                ans.push_back(path);
                return;
            }
            if(idx>n)
            {
                return;
            }
            path.push_back(idx);
            f(idx+1,n,k,ans,path);
            path.pop_back();
            f(idx+1,n,k,ans,path);
        }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>path;
        f(1,n,k,ans,path);
        return ans;
        
    }
};