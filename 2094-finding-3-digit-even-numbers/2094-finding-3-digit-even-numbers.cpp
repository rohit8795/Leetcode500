class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        multiset<int>st;
        vector<int>ans;
        for(int i = 0 ; i < digits.size() ; i++)
        {
            st.insert(digits[i]);
        }
        for(int i = 100 ; i<=999 ; i+=2)
        {
            int x = i;
            int a = x%10; x=x/10;
            int b = x%10 ; x=x/10;
            int c = x;
            if(st.find(a)!=st.end())
            {
                st.erase(st.find(a));
                if(st.find(b)!=st.end())
                {
                    st.erase(st.find(b));
                    if(st.find(c)!=st.end())
                    {
                        ans.push_back(i);
                    }
                    st.insert(b);
                }
                st.insert(a);
            }
        }
        return ans;
    }
};