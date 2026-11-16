class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for(int i = 0 ; i<s.size() ; i++)
        {
            if(isalnum(s[i]))
            {
                char ch = tolower(s[i]);
                str+=ch;
            }
        }
        int n = str.size();
        int i = 0 ;
        int j = n-1;
        cout<<str;
        while(i<=j)
        {
            if(str[i]!=str[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};