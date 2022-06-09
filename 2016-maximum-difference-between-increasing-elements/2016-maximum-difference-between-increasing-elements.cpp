class Solution {
public:
    int maximumDifference(vector<int>& nums) 
    {
        int n=nums.size();
        int res=0;
        int minval=INT_MAX;
        for(int i=0;i<n;i++)
        {
            res=max(res,(nums[i]-minval));
            minval=min(nums[i],minval);
        }
        if(res==0)
        {
            return -1;
        }
        return res;
    }
};

