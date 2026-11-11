class Solution {
public:
    bool isAnagram(string s, string t) {
        // <---- METHOD - 1 --------->
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // if(s==t) return true;
        // return false;

        // <---- METHOD - 1 --------->
        
        if(s.size()!=t.size())
        {
            return false;
        }
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        for(auto i : s) mp1[i]++;
        for(auto j : t) mp2[j]++;
        for(auto k : mp1)
        {
            char ch = k.first;
            int x = k.second;
            if(mp2.find(ch)!=mp2.end())
            {
                if(mp2[ch]!=x)
                {
                    return false;
                }
            }
            else return false;
        }
        return true;
    }
};