class Solution {
public:
    
    vector<int> num;
    int n;
    vector<int> dp;
    int solve(int i)
    {
        if(i >= n) return 0;
        if(dp[i] != -1)
        {
            return dp[i];
        }

        int take = num[i] + solve(i+2);
        int nottake = solve(i+1);

        return dp[i] = max(take,nottake);

    }

    int rob(vector<int>& nums) {
        n = nums.size();
        num = nums;
        dp.resize(n,-1);
        return solve(0);
    }
};