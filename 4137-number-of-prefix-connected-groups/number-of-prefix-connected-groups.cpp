class Solution {
public:
    int prefixConnected(vector<string>& words, int k) {
        
        int n = words.size();
        if(n < 2) return 0;
        
        sort(words.begin(), words.end());
        
        int ans = 0;
        int cnt = 0;   
        
        for(int i = 1; i < n; i++) {
            
            if(words[i].size() >= k && words[i-1].size() >= k &&
               words[i].substr(0,k) == words[i-1].substr(0,k)) {
                
                cnt++;  
            }
            else {
                if(cnt > 0) ans++;   
                cnt = 0;            
            }
        }
        
        if(cnt > 0) ans++;  
        
        return ans;
    }
};
