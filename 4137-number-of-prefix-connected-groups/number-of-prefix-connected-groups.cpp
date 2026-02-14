class Solution {
public:
    int prefixConnected(vector<string>& words, int k) {
        unordered_map<string,int>um;

        for(auto &w:words){
            if(w.size()>=k){
                string s=w.substr(0,k);
                um[s]++;
            }
        }
        int count=0;
        for(auto &it:um){
            if(it.second >=2)
                 count++;
        }
        return count;
    }
};