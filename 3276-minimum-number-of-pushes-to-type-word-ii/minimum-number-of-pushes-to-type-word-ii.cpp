class Solution {
public:
    int minimumPushes(string word) {

        vector<int> f(26, 0);

        for(auto it : word)
            f[it - 'a']++;

        sort(f.rbegin(), f.rend());

        int ans = 0, cnt = 1;

        for(int i = 0; i < 26; i++)
        {
            if(f[i] == 0) break;

            ans += f[i] * cnt;

            if((i + 1) % 8 == 0)
                cnt++;
        }

        return ans;
    }
};