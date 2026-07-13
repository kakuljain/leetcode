class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char, int> l;
        unordered_map<char, int> h;
        int cnt = 0;
        for (int i = 0; i < word.size(); i++) {
            if (word[i] >= 'a' && word[i] <= 'z')

            {
                l[word[i]] = i;
            } else if (h.find(word[i]) == h.end()) {
                h[word[i]] = i;
            }
        }
        for (auto it : h) {
            if (l.find(tolower(it.first)) != l.end() &&
                l[tolower(it.first)] < it.second) {
                cnt++;
            }
        }
        return cnt;
    }
};