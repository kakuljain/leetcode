class Solution {
public:
    string sortSentence(string s) {
        stringstream ss(s);
        string word, ans;
        vector<string> v;

        while(ss >> word)
            v.push_back(word);

        sort(v.begin(), v.end(), [](string a, string b) {
            return a.back() < b.back();
        });

        for(auto x : v)
        {
            x.pop_back();
            ans += x + " ";
        }

        ans.pop_back();
        return ans;
    }
};