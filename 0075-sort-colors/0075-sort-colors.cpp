class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int cnt_0 =0;
        int cnt_1 =0;
        int cnt_2 =0;
        for(int i = 0 ; i < n ; i++)
        {
            if(nums[i]==0)
            {
                cnt_0++;
            }
            else if(nums[i]==1)
            {
                cnt_1++;
            }
            else cnt_2++;
        }
        //cout<<cnt_0<<" "<<cnt_1<<" "<<cnt_2;
        for(int i = 0 ; i < cnt_0 ; i++)
        {
            nums[i] = 0;
        }
        for(int i = cnt_0 ; i < cnt_0 + cnt_1 ; i++)
        {
            nums[i] = 1;
        }
        for(int i = cnt_1+cnt_0 ; i < n ; i++)
        {
            nums[i] = 2;
        }
    }
};