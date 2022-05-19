class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        
//         int slow = nums[0];
//         int fast = nums[0];
        
//         do
//         {
//             slow = nums[slow];
//             fast = nums[nums[fast]];
//         }while(slow != fast);
        
//         fast = nums[0];
//         while(slow != fast)
//         {
//             slow = nums[slow];
//             fast = nums[fast];
//         }
        
//         return slow;
        int n=nums.size();
        int c=0;
        vector<int>ans(n,0);
        for(int i=0;i<n;i++)
        {
            ans[nums[i]]++;
       
        }
        for(int i=0;i<n;i++)
        {
             if(ans[i]>1)
        {
            c=i;
            break;
        }
        }
        return c;
    }
        
    
};