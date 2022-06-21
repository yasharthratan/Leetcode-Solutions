class Solution {
public:
    int countPrimes(int n) 
    {
        int i,j;
        int c=0;
        vector<bool>isprime(n+1,true);
        
        for(i=2;i*i<n;i++)
        {
            if(isprime[i])
            {
                for(j=i*i;j<=n;j=j+i)
                {
                    isprime[j]=false;
                }
            }
        }
        for(int i=2;i<n;i++)
        {
            if(isprime[i])
            {
                c++;
            }
        }
        return c;
        
    }
};