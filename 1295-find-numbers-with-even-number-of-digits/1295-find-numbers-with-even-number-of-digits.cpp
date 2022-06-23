class Solution {
public:
    int findNumbers(vector<int>& nums) 
    {
        int n=nums.size();
        int no,c,ans=0;
        
        for(int i=0;i<n;i++)
        {
            no=nums[i];
            c=0;
            while(no>0)
            {
                int d=no%10;
                c++;
                no=no/10;
            }
            if(c%2==0)
            {
                ans++;
            }
        }
        return ans;
        
    }
};