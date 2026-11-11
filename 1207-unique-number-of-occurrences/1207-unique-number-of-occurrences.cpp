class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int i = 0 ; i < arr.size() ; i++)
        {
            mp[arr[i]]++;
        }
        int n = mp.size();
        unordered_set<int>st;
        for(auto ele : mp) st.insert(ele.second);
        int m = st.size();
        if(m==n) return true;
        return false;
    }
};