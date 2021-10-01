class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) 
    {
        
        int z=nums.size();
        vector<int> ans(2*n,0);
        for(int i=0;i<z;i+=1)
        {
            if(i%2==0)
            {
                ans[i]=nums[i/2];
                
            }
            else
            {
                ans[i]=nums[n + i/2];
            }
        }
        
    return ans;
    }
};