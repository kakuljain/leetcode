class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int l=0,h=n-1;
        int ans=0;
        while(l<h)
        {
            int mid=l+(h-l)/2;
            if(arr[mid]<=arr[mid+1])
            {
                ans=mid+1;
                l=mid+1;
            }
            else if(arr[mid]>arr[mid+1])
            {
                ans=mid;
                h=mid;
            }
        }
        return ans;
    }
};