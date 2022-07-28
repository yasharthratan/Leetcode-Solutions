class Solution {
public:
    vector<int> runningSum(vector<int>& nums) 
    {
        vector<int>ans;
        int n=nums.size();
        int s=0;
        for(int i=0;i<n;i++)
        {
            s+=nums[i];
            ans.push_back(s);
        }
        return ans;
        
    }
};