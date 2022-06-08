class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        string s="";
        int c;
        int max=INT_MIN;
        for(int i=0;i<sentences.size();i++)
        {
            s=sentences[i];
            int j=0;
            c=0;
            while(j<s.length())
            {
                if(s[j]==' ')
                {
                c++;
                }
            j++;
            }
            if(c>max)
            {
                max=c;
            }
        }
        return (max+1);
    }
};

/*
 int n=sentences.size();
        int counter, ans=0;
        for(int i=0;i<n;i++)
        {
            int k=sentences[i].length();
            counter=1;
            for(int j=0;j<k;j++)
            {
                if(sentences[i][j]==' ')
                {
                    counter++;
                }
            }
            ans=max(counter, ans);
        }
        return ans;
    */