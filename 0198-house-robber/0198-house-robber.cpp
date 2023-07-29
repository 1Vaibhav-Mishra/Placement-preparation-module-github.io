class Solution {
    int rob(vector<int> &nums, int i, vector<int> &dp){
        if(i == 0) return nums[i];
        if(i < 0) return 0;
        
        if(dp[i] != -1) return dp[i];
        
        int pick = rob(nums, i-2, dp) + nums[i];
        int notPick = rob(nums, i-1, dp);
        
        return dp[i] = max(pick, notPick);
    }
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, -1);
        return rob(nums, n-1, dp);
    }
};