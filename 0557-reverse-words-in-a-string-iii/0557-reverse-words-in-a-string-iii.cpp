class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        vector<string>res;
        string word;
        string str;
        while(ss>>word)
        {
            res.push_back(word);
        }
        for(int i = 0 ; i < res.size() ; i++)
        {
            string x = res[i];
            reverse(x.begin() , x.end());
            if(i==res.size()-1)
            {
                str += x;
            }
            else str = str+x+" ";
        }
        return str;
    }
};