class Solution {
public:
    bool isIsomorphic(string s, string t) 
    {
         if(s.size()!=t.size()) return false;
        unordered_map<char, char> hshs;
        unordered_map<char, char> hsht;
        for(int i=0;i<s.size();i++){
            if(hshs.find(s[i])==hshs.end()){ 
                hshs[s[i]]=t[i];
            }
            if(hsht.find(t[i])==hsht.end()){
                hsht[t[i]]=s[i];
            }
            if(t[i]!=hshs[s[i]]) return false;
            if(s[i]!=hsht[t[i]]) return false;
        }
        return true;
        
    }
};