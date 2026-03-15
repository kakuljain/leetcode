class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        set<double> st;
        int i = 0;
        int j = nums.size() - 1;

        while(i < j)
        {
            double avg = (nums[i] + nums[j]) / 2.0;
            st.insert(avg);
            i++;
            j--;
        }

        return st.size();
    }
};