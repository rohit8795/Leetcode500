class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int , int> mp;
        for(int i = 0 ; i < nums.size() ;i++)
        {
            mp[nums[i]]++;
        }
        int mx = INT_MIN;
        int x;
        for(auto i : mp){
            //cout<<i.first<<"->"<<i.second<<endl;
            if(i.second>mx)
            {
                mx = i.second;
                x = i.first;
            }
        }
        return x;
    }
};