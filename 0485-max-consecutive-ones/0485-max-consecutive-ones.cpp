class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        int mx = INT_MIN;
        for(int i = 0 ; i < n ; i++)
        {
            if(nums[i]==0)
            {
                mx = max(mx,cnt);
                cnt=0;
            }
            else{
                cnt++;
                if(i==(n-1))
                {
                    mx = max(mx,cnt);
                }
            }
            
        }
        return mx;
    }
};