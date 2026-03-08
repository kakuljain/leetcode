class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        int sum = 0;
        int cnt = 0;

        unordered_map<int, int> mpp;
        for (int it : banned) { 
            mpp[it]++; 
        }

        for(int i = 1; i <= n; i++)
        {
            if(mpp.find(i) != mpp.end()) 
            {
                continue;
            }

            if(sum + i > maxSum) break;

            sum += i;
            cnt++;
        }

        return cnt;
    }
};