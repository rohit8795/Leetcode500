class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {

        // <----------- Method - 1 ------------->

        // int n = nums.size();
        // vector<int>ans(n,-1);
        // int x = nums[n-1];
        // int y = 0;
        // bool flag = false;
        // for(int i = 0 ; i < n-1 ; i++)
        // {
        //     if(nums[i]>x)
        //     {
        //         y = nums[i];
        //         flag = true;
        //         break;
        //     }
        // }
        // if(flag == true)
        // {
        //     ans[n-1] = y;
        // }
        // stack<int>st;
        // st.push(nums[n-1]);
        // for(int i = n-2 ; i>=0 ; i--)
        // {
        //     while(st.size()>0 && st.top()<=nums[i]) st.pop();
        //     if(st.size()>0)
        //     {
        //         ans[i] = st.top();
        //     }
        //     if(st.size()==0)
        //     {
        //         for(int j = 0 ; j < n ; j++)
        //         {
        //             if(nums[j]>nums[i])
        //             {
        //                 ans[i]=nums[j];
        //                 break;
        //             }
        //         }
        //     }
        //     st.push(nums[i]);
        // }
        // return ans;

        // <------------- Method -2 ------------>

        stack<int>st;
        int n = nums.size();
        vector<int>ans(n,-1);
        for(int i = 2*n-1 ; i>=0 ; i--)
        {
            while(st.size()>0 && st.top()<=nums[i%n]) st.pop();
            if(st.size()>0) ans[i%n] = st.top();
            st.push(nums[i%n]);
        }
        return ans;
    }
};