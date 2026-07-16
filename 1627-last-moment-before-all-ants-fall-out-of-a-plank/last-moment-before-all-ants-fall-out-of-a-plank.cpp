class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {

        int leftMax = 0;
        int rightMax = 0;

        if (!left.empty()) {
            leftMax = *max_element(left.begin(), left.end());
        }

        if (!right.empty()) {
            rightMax = n - *min_element(right.begin(), right.end());
        }

        return max(leftMax, rightMax);
    }
};