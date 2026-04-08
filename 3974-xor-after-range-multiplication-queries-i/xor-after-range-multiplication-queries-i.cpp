class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        const int MOD = 1e9 + 7;

        for (int i = 0; i < queries.size(); i++) {
            int idx = queries[i][0];
            int l   = queries[i][1];
            int k1  = queries[i][2];
            int vi  = queries[i][3];

            if (k1 == 0) {
                if (idx < nums.size())
                    nums[idx] = (1LL * nums[idx] * vi) % MOD;
            } else {
                while (idx <= l && idx < nums.size()) {
                    nums[idx] = (1LL * nums[idx] * vi) % MOD;
                    idx += k1;
                }
            }
        }

        int ans = 0;
        for (int x : nums) {
            ans ^= x;
        }

        return ans;
    }
};