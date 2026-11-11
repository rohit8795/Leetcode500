class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_map<string,int>mp;
        for(auto i : words)
        {
            sort(i.begin(),i.end());
            mp[i]++;
        }
        for(auto i : mp)
        {
            cout<<i.first<<"->"<<i.second<<endl;
        }
        int count = 0;
        for(auto i : mp)
        {
            if(i.second == 2)
            {
                count++;
            }
        }
        return count;
    }
};