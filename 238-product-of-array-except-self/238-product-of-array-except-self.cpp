class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        
        int n=nums.size();
        vector<int>p;
        
        int product=1;
        for(int i=0;i<n;i++)
        {
            product*=nums[i];
            p.push_back(product);
        }
        
        product=1;
        for(int i=n-1;i>0;i--)
        {
            p[i]=p[i-1]*product;
            product*=nums[i];
        }
        p[0]=product;
        
        return p;
    }
};
/*
int n=nums.size();
        int fromBegin=1;
        int fromLast=1;
        vector<int> res(n,1);
        
        for(int i=0;i<n;i++){
            res[i]*=fromBegin;
            fromBegin*=nums[i];
        }
        
        for(int i=n-1;i>=0;i--)
        {
            res[i]*=fromLast;
            fromLast*=nums[i];
        }
        return res;
*/