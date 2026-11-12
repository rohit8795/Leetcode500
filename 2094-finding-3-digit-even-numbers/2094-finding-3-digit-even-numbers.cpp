class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {

        // <------ METHOD - 1 --------->

        // multiset<int>st;
        // vector<int>ans;
        // for(int i = 0 ; i < digits.size() ; i++)
        // {
        //     st.insert(digits[i]);
        // }
        // for(int i = 100 ; i<=999 ; i+=2)
        // {
        //     int x = i;
        //     int a = x%10; x=x/10;
        //     int b = x%10 ; x=x/10;
        //     int c = x;
        //     if(st.find(a)!=st.end())
        //     {
        //         st.erase(st.find(a));
        //         if(st.find(b)!=st.end())
        //         {
        //             st.erase(st.find(b));
        //             if(st.find(c)!=st.end())
        //             {
        //                 ans.push_back(i);
        //             }
        //             st.insert(b);
        //         }
        //         st.insert(a);
        //     }
        // }
        // return ans;

        // <------ METHOD - 2 ---------> 

        // unordered_map<int , int>mp;
        // vector<int>ans;
        // for(int i : digits)
        // {
        //     mp[i]++;
        // }
        // for(int i = 100 ; i<=999 ; i+=2)
        // {
        //     int x = i;
        //     int a = x%10; x=x/10;
        //     int b = x%10 ; x=x/10;
        //     int c = x;
        //     if(mp.find(a)!=mp.end())
        //     {
        //         mp[a]--;
        //         if(mp[a]==0) mp.erase(a);
        //         if(mp.find(b)!=mp.end())
        //         {
        //             mp[b]--;
        //             if(mp[b]==0) mp.erase(b);
        //             if(mp.find(c)!=mp.end())
        //             {
        //                 ans.push_back(i);
        //             }
        //             mp[b]++;
        //         }
        //         mp[a]++;
        //     }
        // }
        // return ans;

        // <------ METHOD - 2 ---------> 
        vector<int>ans;
        vector<int>freq(100,0);
        for(int i : digits)
        {
            freq[i]++;
        }
        for(int i = 100 ; i<=999 ; i+=2)
        {
            int x = i;
            int a = x%10; x=x/10;
            int b = x%10 ; x=x/10;
            int c = x;
            freq[a]--;
            freq[b]--;
            freq[c]--;
            if(freq[a]>=0 && freq[b]>=0 && freq[c]>=0)
            {
                ans.push_back(i);
            }
            freq[a]++;
            freq[b]++;
            freq[c]++;
        }
        return ans;

    }
};