class Solution {
public:
    int solve( int x , vector<int>& dp)
    {
        if(x<=2) return x;
        if(dp[x]!=-1) return dp[x];
        return dp[x] = solve(x-1 , dp)+solve(x-2 , dp);
    }
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return solve(n , dp);
    }
};