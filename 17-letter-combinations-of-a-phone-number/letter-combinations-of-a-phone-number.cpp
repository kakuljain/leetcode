class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.size() == 0) return {};

        vector<string> letters = {
            "", "", "abc", "def", "ghi",
            "jkl", "mno", "pqrs", "tuv", "wxyz"
        };

        vector<string> ans;
        ans.push_back("");   

        for (int i = 0; i < digits.size(); i++) {
            vector<string> temp;
            string curr = letters[digits[i] - '0'];

            for (int j = 0; j < ans.size(); j++) {
                for (int k = 0; k < curr.size(); k++) {
                    temp.push_back(ans[j] + curr[k]);
                }
            }
            ans = temp;
        }
        return ans;
    }
};
