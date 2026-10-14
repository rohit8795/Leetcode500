class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int idx;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i]==0)
            {
                idx = i;
                break;
            }
        }
        for(int i = idx+1 ; i < nums.size() ; i++)
        {
            if(nums[i]!=0)
            {
                swap(nums[i],nums[idx]);
                idx++;
            }
        }
    }
};