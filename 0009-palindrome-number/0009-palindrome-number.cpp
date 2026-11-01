class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        }
        int original = x;
        long long rev = 0;
        while(x>0)
        {
            rev = (10*rev)+(x%10);
            x = x/10;
        }
        if(rev == original){
            return true;
        }
        return false;

    }
};