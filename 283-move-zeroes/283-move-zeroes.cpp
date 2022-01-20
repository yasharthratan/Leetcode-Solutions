class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        
//         int n=nums.size();
//         int j=0;
//         int i=0;
//             while (nums[i]!=0)
//             {
//                 nums[j]=nums[i];
//                  j++;
//                  i++;
                
//             }
           
        
//         int k = n-j;
//         for(int i=0;i<k;i++)
//         {
//             nums.push_back(0);
//         }
        int n= nums.size();
         int j = 0;
        // move all the nonzero elements advance
        for (int i = 0; i < n; i++) 
        {
            if (nums[i] != 0)
            {
                nums[j++] = nums[i];
            }
        }
        for (;j < n; j++) 
        {
            nums[j] = 0;
        }
        
    }
};