class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        vector<int>ans;
        vector<int>freq(100,0);
        unordered_set<int>st;
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
                st.insert(i);
            }
            freq[a]++;
            freq[b]++;
            freq[c]++;
        }
        // for(int i : ans)
        // {
        //     st.insert(i);
        // }
        return st.size();
    }
};