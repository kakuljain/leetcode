class Solution {
public:
    int maxVowels(string s, int k) {
        int l=0,r=0,cnt=0,ans=INT_MIN;
        while(r<s.size()){
        if(s[r]=='a'||s[r]=='i'||s[r]=='e'||s[r]=='o'||s[r]=='u')
        {
            cnt++;
        }
        while(r-l+1>k)
        {
          if(s[l]=='a'||s[l]=='i'||s[l]=='e'||s[l]=='o'||s[l]=='u')
          {
            cnt--;}
            l++;
          }
          if(r-l+1==k)
          {ans=max(ans,cnt);}
          r++;
        }
        return ans;
    }
};