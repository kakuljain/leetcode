class Solution {
public:
    string intToRoman(int nums) {
        vector<int> val{1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        vector<string> sym{"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

        string ans = "";

        for (int i = 0; i < 13; i++) {
            if (nums == 0) break;

            int t = nums / val[i];
            while (t--) {
                ans += sym[i];
            }

            nums %= val[i];
        }

        return ans;
    }
};