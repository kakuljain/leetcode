class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n=arr.size();
        vector<int>ans;
        int l=0,h=n-1;
        int left=0,right=0;
        while(l<=h)
        {int mid=l+(h-l)/2;
            if(arr[mid]==x)
            {
                ans.push_back(arr[mid]);
                k--;
                left=mid-1;
                right=mid+1;
                break;
            }
            else if(arr[mid]>x)
            {
                h=mid-1;
            }
            else 
            {
                l=mid+1;
            }
        } if (left == 0 && right == 0)
        {
            left = h;
            right = l;
        }
        while(k>0)
        {
            if(left<0)
            {
                ans.push_back(arr[right]);
                right++;
            }
            else if(right>=n)
            {
                ans.push_back(arr[left]);
                
                    left--;
                
            }
            else
            {
                int leftDist = abs(arr[left] - x);
                int rightDist = abs(arr[right] - x);

                if (leftDist <= rightDist)
                {
                    ans.push_back(arr[left]);
                    left--;
                }
                else
                {
                    ans.push_back(arr[right]);
                    right++;
                }
            }
            k--;
        }

        sort(ans.begin(), ans.end());
        return ans;
    }
};