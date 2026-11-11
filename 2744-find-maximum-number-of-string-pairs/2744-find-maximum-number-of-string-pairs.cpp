class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        // <---- METHOD - 1 ------>

        // unordered_map<string,int>mp;
        // for(auto i : words)
        // {
        //     sort(i.begin(),i.end());
        //     mp[i]++;
        // }
        // int count = 0;
        // for(auto i : mp) if(i.second == 2) count++;
        // return count;

        // <---- METHOD - 2 ------>
        unordered_set<string>st;
        int count = 0;
        for(int i = 0 ; i < words.size() ; i++)
        {
            string rev = words[i];
            reverse(rev.begin(),rev.end());
            if(st.find(rev)!=st.end())
            {
                count++;
                st.erase(rev);
            }
            else st.insert(words[i]);
        }
        return count;
    }
};