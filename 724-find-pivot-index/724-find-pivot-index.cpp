class Solution {
public:
    int pivotIndex(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>prefixs(n);
        prefixs[0]=nums[0];
        int ans=-1;
        for(int i=1;i<n;i++)
        {
            prefixs[i]=prefixs[i-1]+nums[i];
        }
        
       // for(int i=0;i<n;i++)
        
            if(prefixs[n-1]-prefixs[0]==0)
            {
                ans=0;
                return ans;
            }
            // else if(i==n-1 && (prefixs[n-2]==0))
            // {
            //     return n-1;
            // }
             for(int i=1;i<n;i++)
             {
                 if((prefixs[n-1]-prefixs[i])==prefixs[i-1])
                {
                     ans=i;
                   return ans;
                }
             }
                
        return ans;    
        }
        
        
    
};