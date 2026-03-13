class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int n = skill.size();
        sort(skill.begin(), skill.end());

        int i = 0, j = n - 1;
        long long ans = 0;

        int target = skill[i] + skill[j];  

        while(i < j)
        {
            if(skill[i] + skill[j] != target)
            return -1;

            ans += (long long)skill[i] * skill[j];

            i++;
            j--;
        }

        return ans;
    }
};