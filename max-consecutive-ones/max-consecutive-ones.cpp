class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int n=nums.size();
        int c=0;
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
            {
                c++;
            }
            else
            {
                maxi=max(maxi,c);
                c=0;
            }
            
        }
        if(nums[n-1]==1)
        {
            return max(maxi,c);
        }
        
        return maxi;
        
    }
};