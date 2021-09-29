class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) 
    {
        
        int n = 2*nums.size();
        vector<int> ans(n,0);
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(i<nums.size())
            {
                ans[i]= nums[i];
            }
            else
            {
                ans[i]=nums[j];
                j++;
            }
        }
           return ans;
 
    }
};