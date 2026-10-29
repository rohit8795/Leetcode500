class Solution {
public:
    int solve( int x , vector<int>& dp)
    {
        if(x<=1) return x;
        if(x==2) return 1;
        if(dp[x]!=-1) return dp[x];
        return dp[x] = solve(x-1 , dp)+solve(x-2 , dp)+solve(x-3 , dp);
    }
    int tribonacci(int n) {
        vector<int>dp(n+1,-1);
        return solve(n , dp);
    }
};