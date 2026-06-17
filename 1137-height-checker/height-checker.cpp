class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n=heights.size();
        int cnt=0;
        vector<int>c=heights;
        sort(heights.begin(),heights.end());
        for(int i=0;i<n;i++)
        {
            if(heights[i]!=c[i])
            {
                cnt++;
            }
        }
        return cnt;
    }
};