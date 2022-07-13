class Solution {
public:
    int pivotIndex(vector<int>& nums) 
    {
//         int n=nums.size();
//         vector<int>prefixs(n);
//         prefixs[0]=nums[0];
//         int ans=-1;
//         for(int i=1;i<n;i++)
//         {
//             prefixs[i]=prefixs[i-1]+nums[i];
//         }
        
//        // for(int i=0;i<n;i++)
        
//             if(prefixs[n-1]-prefixs[0]==0)
//             {
//                 ans=0;
//                 return ans;
//             }
//             // else if(i==n-1 && (prefixs[n-2]==0))
//             // {
//             //     return n-1;
//             // }
//              for(int i=1;i<n;i++)
//              {
//                  if((prefixs[n-1]-prefixs[i])==prefixs[i-1])
//                 {
//                      ans=i;
//                    return ans;
//                 }
//              }
                
//         return ans;   
        
        
//         }
        int lsum=0;
        int rsum=0;
        int ans=-1;
        int j;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            rsum+=nums[i];
        }
        for(j=0;j<n;j++)
        {
            rsum-=nums[j];
            if(lsum==rsum)
            {
                ans=j;
                return ans; 
            }
            lsum+=nums[j];
        }
        return ans;
        
    }  
};