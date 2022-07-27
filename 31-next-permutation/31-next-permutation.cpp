class Solution {
public:
    void nextPermutation(vector<int>& nums) 
    {
        bool ok = false;
        for(int i=nums.size()-1;i>0;i--)
        {
            if(nums[i] > nums[i-1])
            {
                int index=i,threshold = nums[i-1];
                for(int x = i;x < nums.size(); x++)
                {
                   if(nums[x] > threshold)
                        index = x; 
                }
                swap(nums[index],nums[i-1]);
                reverse(nums.begin()+i,nums.end());
                ok = true;
                break;
            }
        }
        if(!ok)
            reverse(nums.begin(),nums.end());
        
    }
};