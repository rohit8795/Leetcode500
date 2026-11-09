class Solution {
public:
    int solve(vector<int>& nums , int i , int n , vector<int>& dp)
    {
        if(i>=n)
        {
            return 0;
        }
        if(dp[i]!=-1)
        {
            return dp[i];
        }
        int steal = nums[i]+solve(nums,i+2,n,dp);
        int skip = solve(nums,i+1,n,dp);
        return dp[i] = max(steal , skip);
    }

    int rob(vector<int>& nums) {
        // RECURSION + MOMOIZATION CODE 

        int n = nums.size();
        vector<int> dp(n+1 , -1);
        return solve(nums , 0 , n , dp);


        //BOTTOM-UP APPROCH

        // int n = nums.size();
        // vector<int> dp(n+1 , -1);
        // dp[0] = 0;
        // dp[1] = nums[0];
        // for(int i = 2 ; i <= n ; i++)
        // {
        //     int steal = nums[i-1]+dp[i-2];
        //     int skip = dp[i-1];
        //     dp[i] = max(steal , skip);
        // }
        // return dp[n];
    }
};