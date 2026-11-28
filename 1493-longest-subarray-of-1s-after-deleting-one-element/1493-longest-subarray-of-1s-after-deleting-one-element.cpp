class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int k = 1;
        int n = nums.size();
        int maxLen = INT_MIN;
        int flips = 0;
        int i = 0;
        int j = 0;
        while(j<n)
        {
            if(nums[j]==1) j++;
            else
            {
                if(flips<k)
                {
                    flips++;
                    j++;
                }
                else{
                    maxLen = max(maxLen,j-i);
                    while(nums[i]==1) i++;
                    i++;
                    j++;
                }
            }
        }
        maxLen = max(maxLen,j-i);
        return maxLen-1;
    }
};