class NumArray {
public:
    vector<int>prefix;
    NumArray(vector<int>& nums) {
        prefix.resize(nums.size());
        prefix[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            prefix[i]=prefix[i-1]+nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        int ans=0;
        if(left==0) return prefix[right];
        ans=prefix[right]-prefix[left-1];
        return ans;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */