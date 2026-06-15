class Solution {
public:
    char kthCharacter(int k) {
      
         string word="a";
        while(word.size()<k)
        {string s="";
            for(auto c:word)
            {
                s+=(c+1);
            }
            word+=s;
        }
        return word[k-1];
    }
};