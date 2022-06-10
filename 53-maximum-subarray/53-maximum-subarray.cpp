class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int n=nums.size();
        int maxend=nums[0];
        int res=nums[0];
        
        for(int i=1;i<n;i++)
        {
            maxend=max((maxend+nums[i]),nums[i]);
            res=max(res,maxend);
        }
        return res;
    }
};