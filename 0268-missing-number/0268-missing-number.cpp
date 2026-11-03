class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int mx = nums.size();
        int res = mx*(mx+1)/2;
        int sum = accumulate(nums.begin() , nums.end() , 0);
        return res-sum;
    }
};