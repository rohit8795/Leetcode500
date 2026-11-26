class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();
        int sum = 0;
        for(int i = 0 ; i < k ;i++)
        {
            sum = sum+arr[i];
        }
        int cnt = 0;
        int maxAvg = sum/k;
        if(maxAvg>=threshold) cnt++;
        int i = 1;
        int j = k;
        while(j<n)
        {
            int  currSum = sum + arr[j]-arr[i-1];
            int x = currSum/k;
            if(x>=threshold) cnt++;
            sum = currSum;
            i++;
            j++;
        }
        return cnt;
    }
};