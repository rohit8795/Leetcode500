class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string ward;
        string str = "";
        vector<string>v;
        while(ss>>ward)
        {
            v.push_back(ward);
        }
        for(int i = v.size()-1 ; i >=0 ;i--)
        {
            if(i==0)
            {
                str = str+v[i];
            }
            else{
                str = str+v[i]+" ";
            }
        }
        return str;
    }
};