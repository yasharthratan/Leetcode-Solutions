class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int n=nums.size();
        int res=0;
        int count=1;
        int ans;
        for(int i=1;i<n;i++)
        {
            if(nums[i]==nums[res])
            {
                count++;
            }
            else
            {
                count--;
            }
            if(count==0)
            {
                count=1;
                res=i;
            }
        }
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(nums[res]==nums[i])
            {
                c++;
            }
        }
        if(c>n/2)
        {
            ans=nums[res];
        }
        return ans;
    }
};