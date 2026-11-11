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

        // unordered_set<string>st;
        // int count = 0;
        // for(int i = 0 ; i < words.size() ; i++)
        // {
        //     string rev = words[i];
        //     reverse(rev.begin(),rev.end());
        //     if(st.find(rev)!=st.end())
        //     {
        //         count++;
        //         st.erase(rev);
        //     }
        //     else st.insert(words[i]);
        // }
        // return count;


        // <---- METHOD - 3 ------>

        unordered_set<string>st;
        int count = 0;
        for(int i = 0 ; i < words.size() ; i++)
        {
            st.insert(words[i]);
        }
        for(int i = 0 ; i < words.size() ; i++)
        {
            string s = words[i];
            reverse(s.begin(),s.end());
            if(words[i] == s) continue;
            if(st.find(s)!=st.end())
            {
                count++;
                st.erase(words[i]);
            }
        }
        return count ;
    }
};