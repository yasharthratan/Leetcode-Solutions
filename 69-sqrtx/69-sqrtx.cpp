class Solution {
public:
    int mySqrt(int x) 
    {
        if(x==0)
        {
            return 0;
        }
        long long low=1;
        long long high=x;
        long long ans;
        while(low<=high)
        {
            long long mid=(low+high)/2;
            long long msq=mid*mid;
            if(msq==x)
            {
                return mid;
            }
            else if(msq>x)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
                ans=mid;
            }
        }
        return ans;
        
        
    }
};