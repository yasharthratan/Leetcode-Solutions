class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) 
    {
        int w1=word1.size();
        int w2=word2.size();
        string a,b;
        
        for(int i=0;i<w1;i++)
        {
            a=a+word1[i];
        }
        
          for(int j=0;j<w2;j++)
        {
            b=b+word2[j];
        }
        
        if(a.compare(b) == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};