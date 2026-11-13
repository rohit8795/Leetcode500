class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int cnt_0 = 0;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i]%2==0)
            {
                cnt_0++;
            }
        }
        int n = nums.size();
        int cnt_1 = n-cnt_0;
        for(int i = 0 ; i < cnt_0 ; i++)
        {
            nums[i]=0;
        }
        for(int i = cnt_0 ; i < n ; i++)
        {
            nums[i] =1;
        }
        return nums;
    }
};