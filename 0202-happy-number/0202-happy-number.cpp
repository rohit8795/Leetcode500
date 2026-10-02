class Solution {
public:
    int digitsum(int n )
    {
        int sum = 0 ;
        int ld ;
        while(n>0)
        {
            ld = n%10;
            sum = sum + ld*ld;
            n = n/10;
        }
        return sum;
    }
    bool isHappy(int n) {
        if(n==1)
        {
            return true;
        }
        while(n>4)
        {
            n = digitsum(n);
            if(n==1)
            {
                return true;
                break;
            }
        }
        return false;
    }
};