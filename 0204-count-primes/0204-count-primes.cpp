class Solution {
public:
    int countPrimes(int n) {
        if(n<2) return 0;
        vector<bool>v(n,true);
        v[0]=false;
        v[1]=false;

        for(long long i = 2 ; i < n ;i++)
        {
            if(v[i]){
                for(long long j = i*i ; j<n ; j+=i)
                {
                    v[j]=false;
                }
            }
        }
        int cnt = 0;
        for(int i = 0 ; i < v.size() ; i++)
        {
            if(v[i]==true)
            {
                cnt++;
            }
        }
        return cnt;
    }
};