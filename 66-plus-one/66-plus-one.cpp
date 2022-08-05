class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        /*
        TLE
        vector<int>ans;
        int n=digits.size();
        int r=0;
        int no;
        for(int i=0;i<n;i++)
        {
            r=r*10+digits[i];
        }
        no=r+1;
        
        while(no>=0)
        {
            int d=no%10;
            ans.push_back(d);
        }
        reverse(ans.begin(),ans.end());
        return ans;
        */
        
        int n=digits.size();
        for(int i=n-1;i>=0;i--)
        {
            if(digits[i]<9)
            {
                digits[i]++;
                return digits;
            }
            else
            {
                digits[i]=0;
            }
        }
        digits.push_back(0);
        digits[0]=1;
        return digits;
    }
};