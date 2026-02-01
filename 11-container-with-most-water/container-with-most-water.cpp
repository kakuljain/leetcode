class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int ans=0,l=0,r=n-1;
        int w=0,h=0;
        while(l<r)
        {
            w=r-l;
            h=min(height[l],height[r]);
            ans=max(ans,w*h);
        
        if(height[l]<height[r])
        {
            l++;
        }
        else
        {
            r--;
        }}
        return ans;
    }
};