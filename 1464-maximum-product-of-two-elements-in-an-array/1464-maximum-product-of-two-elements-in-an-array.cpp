class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        /*int res=-1;
        int largest=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>nums[largest])
            {
                res=largest;
                largest=i;
            }
            else if(nums[i]!=nums[largest])
            {
                if(res==-1 || nums[i]>nums[res])
                {
                    res=i;
                }
            }
        }
        return ((nums[res]-1)*(nums[largest]-1));*/
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int ans=(nums[n-1]-1)*(nums[n-2]-1);
        return ans;
    }
};