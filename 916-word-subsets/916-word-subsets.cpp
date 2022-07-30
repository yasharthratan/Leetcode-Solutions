class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) 
    {
        vector<int>freq(26,0);           //create the frequency count of elements of B.
        for(auto x:words2)
        {
            vector<int>temp(26,0);
            for(auto y:x)
            {
                temp[y-'a']++;
                freq[y-'a'] = max(freq[y-'a'],temp[y-'a']); 
            }
        }
        vector<string>res;
        for(auto x:words1)
        {
            vector<int>temp(26,0);
            for(auto y:x) temp[y-'a']++;    //create the frequency count for all the elements in A
            bool flag=true;
            for(int i=0 ; i<26 ; i++)
                if(freq[i]>temp[i]) 
                {
                    flag=false;break;
                }         //check if the frequency count of B is subset of all A elements
            if(flag) res.push_back(x);
        }
        return res;
        
        
    }
};