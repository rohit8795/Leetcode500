class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        vector<string> v;
        string ward;
        while(ss>>ward)
        {
            v.push_back(ward);
        }
        string str = v[v.size()-1];
        return str.size();
    }
};