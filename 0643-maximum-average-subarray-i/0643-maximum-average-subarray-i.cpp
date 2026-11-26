class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double x = (double)k;
        int sum = 0;
        for(int i = 0 ; i < k ; i++)
        {
            sum += nums[i];
        }
        int i = 1;
        int j = k;
        double maxAvg = sum/x;

        while(j<n){
            int currSum = sum + nums[j]-nums[i-1];
            double y = currSum/x;
            if(maxAvg<y)
            {
                maxAvg = y;
            }
            sum = currSum;
            i++;
            j++;
        }
        return maxAvg;
    }
};