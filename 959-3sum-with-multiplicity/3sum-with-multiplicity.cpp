class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        int n = arr.size();
        long long count = 0;
        int mod = 1e9 + 7;

        sort(arr.begin(), arr.end());

        for(int i = 0; i < n; i++) {
            int j = i + 1;
            int k = n - 1;

            while(j < k) {
                int sum = arr[i] + arr[j] + arr[k];

                if(sum < target) {
                    j++;
                }
                else if(sum > target) {
                    k--;
                }
                else { 

                    if(arr[j] == arr[k]) {
                        int m = k - j + 1;
                        count += (m * (m - 1)) / 2;
                        break;
                    }

                  
                    int left = 1, right = 1;

                    while(j + 1 < k && arr[j] == arr[j + 1]) {
                        left++;
                        j++;
                    }

                    while(k - 1 > j && arr[k] == arr[k - 1]) {
                        right++;
                        k--;
                    }

                    count += left * right;

                    j++;
                    k--;
                }
            }
        }

        return count % mod;
    }
};