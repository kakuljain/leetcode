class Solution {
public:
    int carFleet(int target, vector<int>& pos, vector<int>& sp) {
        int n = sp.size();

        vector<pair<int, int>> p;
        stack<double> st;
        vector<double> t;

        for (int i = 0; i < n; i++) {
            p.push_back({pos[i], sp[i]});
        }

        sort(p.begin(), p.end());

        for (auto it : p) {
            double time = (double)(target - it.first) / it.second;
            t.push_back(time);
        }

        for (int i = t.size() - 1; i >= 0; i--) {
            double a = t[i];

            if (st.empty()) {
                st.push(a);
            } else if (st.top() < a) {
                st.push(a);
            }
        }

        return st.size();
    }
};