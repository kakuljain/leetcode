class Solution {
public:

    bool isVowel(char ch)
    {
        return (ch=='A' || ch=='a' || 
                ch=='E' || ch=='e' || 
                ch=='I' || ch=='i' || 
                ch=='O' || ch=='o' || 
                ch=='U' || ch=='u');
    }

    string sortVowels(string s) {
        
        string ans = "";
        int n = s.size();

      
        for(int i=0; i<n; i++)
        {
            if(isVowel(s[i]))
            {
                ans.push_back(s[i]);
            }
        }

        
        sort(ans.begin(), ans.end());

        
        int j = 0;

        for(int i=0; i<n; i++)
        {
            if(isVowel(s[i]))
            {
                s[i] = ans[j];
                j++;
            }
        }

        return s;
    }
};