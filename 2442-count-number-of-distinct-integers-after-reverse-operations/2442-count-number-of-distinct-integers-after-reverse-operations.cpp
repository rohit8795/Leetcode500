class Solution {
public:
    int revdigit(int n)
    {
        int rev = 0;
        while(n>0)
        {
            rev = (rev*10)+(n%10);
            n = n/10;
        }
        return rev;
    }
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int>st;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            st.insert(nums[i]);
            st.insert(revdigit(nums[i]));
        }
        return st.size();
    }
};