class Solution {
public:
    int thirdMax(vector<int>& nums) 
    {
         set<int> top3;
    for (int num : nums) 
    {
        top3.insert(num);
        if (top3.size() > 3)
        {
            top3.erase(top3.begin());
        }
            
    }
    return top3.size() == 3 ? *top3.begin() : *top3.rbegin();
        
      
        /* int n=nums.size();
        int ans;
        sort(nums.begin(),nums.end());
        if(n==2)
        {
            ans=nums[n-1];
        }
        else if(n==1)
        {
            ans=nums[0];
        }
        else
        {
            
        }
        return ans;
        */
        
    }
};