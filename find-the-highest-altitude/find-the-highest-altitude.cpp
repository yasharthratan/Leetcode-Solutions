class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        
        int n =gain.size();
        vector<int> alt(n+1,-1);
        int sum=0;
        int a;
        alt[0]=0;
        
        for(int i=0;i<n;i++)
        {
            sum=sum+gain[i];
            
            alt[i+1]=sum;
        }
        
        a=*max_element (alt.begin(), alt.end());
        
        
           return a;
    }
    
 
};