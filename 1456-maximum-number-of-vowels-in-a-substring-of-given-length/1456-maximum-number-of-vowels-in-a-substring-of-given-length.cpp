class Solution {
public:
    bool isvowel(char ch)
    {
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') return true;
        return false;
    }
    int maxVowels(string s, int k) {
        int n = s.size();
        int prevCnt = 0;
        for(int i = 0 ; i < k ; i++)
        {
            if(isvowel(s[i])) prevCnt++;
        }
        int maxCnt = prevCnt;
        int i = 1;
        int j = k;
        while(j<n)
        {
            int currCnt = prevCnt;
            if(isvowel(s[j])) currCnt++;
            if(isvowel(s[i-1])) currCnt--;
            if(maxCnt<currCnt)
            {
                maxCnt = currCnt;
            }
            prevCnt = currCnt;
            i++;
            j++;
        }
        return maxCnt;
    }
};