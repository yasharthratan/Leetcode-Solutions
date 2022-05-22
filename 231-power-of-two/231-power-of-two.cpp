class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        // for(int i=0;i<n;i++)
        // {
        //     if(pow(2,i)==n)
        //     {
        //         return true;
        //     }
        // }
        //         return false;
        // TLE AAYA ISME
        
        if(n==0)
        {
            return 0;
        }
        while(n%2==0)
        {
            n/=2;
        }
        return n==1;
        
    }
};