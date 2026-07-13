class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_set<char> l;
        unordered_set<char> u;
        int cnt = 0;

        for (auto it : word)
        {
            if (it >= 'a' && it <= 'z')
            {
                l.insert(it);
            }
            else if (it >= 'A' && it <= 'Z')
            {
                u.insert(it);
            }
        }

        for (auto it : u)
        {
            if (l.find(tolower(it)) != l.end())
            {
                cnt++;
            }
        }

        return cnt;
    }
};