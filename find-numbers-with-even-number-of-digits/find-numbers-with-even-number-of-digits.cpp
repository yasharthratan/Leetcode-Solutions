class Solution {
public:
    int findNumbers(vector<int>& nums) 
    {
        int n=nums.size();
        int c=0;
        int cp;
        
        for(int i=0;i<n;i++)
        {
            cp=0;
            while(nums[i]>0)
            {
                nums[i]=nums[i]/10;
                cp+=1;
            }
             if(cp%2==0)
                {
                    c+=1;
                }
        }
        return c;
        
    }
};