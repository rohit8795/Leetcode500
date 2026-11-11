class Solution {
public:
    bool isAnagram(string s, string t) {
        // <---- METHOD - 1 --------->
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // if(s==t) return true;
        // return false;

        // <---- METHOD - 2 --------->
        
        // if(s.size()!=t.size())
        // {
        //     return false;
        // }
        // unordered_map<char,int>mp1;
        // unordered_map<char,int>mp2;
        // for(auto i : s) mp1[i]++;
        // for(auto j : t) mp2[j]++;
        // for(auto k : mp1)
        // {
        //     char ch = k.first;
        //     int x = k.second;
        //     if(mp2.find(ch)!=mp2.end())
        //     {
        //         if(mp2[ch]!=x)
        //         {
        //             return false;
        //         }
        //     }
        //     else return false;
        // }
        // return true;

        // <---- METHOD - 3 --------->

        if(s.size()!=t.size())
        {
            return false;
        }
        unordered_map<char,int>mp;
        for(int i = 0 ; i < s.size() ; i++)
        {
            mp[s[i]]++;
        }
        for(auto ele : t)
        {
            if(mp.find(ele)!=mp.end())
            {
                mp[ele]--;
                if(mp[ele]==0)
                {
                    mp.erase(ele);
                }
            }
            else return false;
        }
        if(mp.size()>0)
        {
            return false;
        }
        return true;
    }
};