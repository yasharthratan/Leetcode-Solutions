class Solution {
public:
    int findGCD(vector<int>& nums) 
    {
        int a,b;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        a=nums[0];
        b=nums[n-1];
        int gcd=1;
        for(int i=2;i<=a&&i<=b;i++)
        {
            if((a%i==0) && (b%i==0))
            {
                gcd = i;
            }
        }
        return gcd;
        
    }
};