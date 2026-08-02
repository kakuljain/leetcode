class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int es=0,os=0;
        for(int i=0;i<piles.size();i++)
        {
            if(i%2==0)
            {
                es+=piles[i];
            }
            os+=piles[i];
            
        }
        return es!=os;
    }
};