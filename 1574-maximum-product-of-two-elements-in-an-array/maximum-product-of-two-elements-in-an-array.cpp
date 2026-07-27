class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int>pq;
        for(auto it:nums)
        {
            pq.push(it);
        }
        int x=pq.top();
        pq.pop();
        int y=pq.top();
        pq.pop();
        int z=(x-1)*(y-1);
        return z;
    }
};