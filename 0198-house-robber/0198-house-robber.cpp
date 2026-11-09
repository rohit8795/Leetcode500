class Solution {
public:
    // int solve(vector<int>& nums , int i , int n , vector<int>& memo)
    // {
    //     if(i>=n)
    //     {
    //         return 0;
    //     }
    //     if(memo[i]!=-1)
    //     {
    //         return memo[i];
    //     }
    //     int steal = nums[i]+solve(nums,i+2,n,memo);
    //     int skip = solve(nums,i+1,n,memo);
    //     return memo[i] = max(steal , skip);
    // }

    int rob(vector<int>& nums) {
        // RECURSION + MOMOIZATION CODE 

        // int n = nums.size();
        // vector<int> memo(n+1 , -1);
        // return solve(nums , 0 , n , memo);


        //BOTTOM-UP APPROCH
        int n = nums.size();
        vector<int> memo(n+1 , -1);
        memo[0] = 0;
        memo[1] = nums[0];
        for(int i = 2 ; i <= n ; i++)
        {
            int steal = nums[i-1]+memo[i-2];
            int skip = memo[i-1];
            memo[i] = max(steal , skip);
        }
        return memo[n];
    }
};