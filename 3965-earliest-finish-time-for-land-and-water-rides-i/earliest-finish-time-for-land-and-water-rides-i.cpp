class Solution {
public:
    int earliestFinishTime(vector<int>& lst, vector<int>& ldt, vector<int>& wst,
                           vector<int>& wdt) {

        int ans = INT_MAX;

        for (int i = 0; i < lst.size(); i++) {
            for (int j = 0; j < wst.size(); j++) {

                int lakeFinish = lst[i] + ldt[i];

                int finish1;
                if (lakeFinish > wst[j])
                    finish1 = lakeFinish + wdt[j];
                else
                    finish1 = wst[j] + wdt[j];

                ans = min(ans, finish1);

                int waterFinish = wst[j] + wdt[j];

                int finish2;
                if (waterFinish > lst[i])
                    finish2 = waterFinish + ldt[i];
                else
                    finish2 = lst[i] + ldt[i];

                ans = min(ans, finish2);
            }
        }

        return ans;
    }
};