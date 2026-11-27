class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int i = 0 ;
        int j = 0 ;
        int sum = 0;
        int minLen  = nums.size()+2;
        while(j<n)
        {
            sum = sum+nums[j];
            while(sum>=target)
            {
                minLen = min(minLen,j-i+1);
                sum = sum-nums[i];
                i++;
            }
            j++;
        }
        if(minLen  == nums.size()+2) return 0;
        return minLen;
    }
};