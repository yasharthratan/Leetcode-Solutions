class Solution {
public:
    int subtractProductAndSum(int n) {
        int p=1;
        int s=0;
        int d,ans;
        
        while(n>0)
        {
            d=n%10;
            s=s+d;
            p=p*d;
            n=n/10;
        }
        ans = p-s;
        return ans;
    }
};