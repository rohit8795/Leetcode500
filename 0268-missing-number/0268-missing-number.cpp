class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int mx = nums.size();
        int res = mx*(mx+1)/2;
        int sum = 0 ;
        for(int i = 0 ; i < nums.size();i++)
        {
            sum = sum+nums[i];
        }
        return res-sum;
    }
};