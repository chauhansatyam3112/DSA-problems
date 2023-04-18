class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        int n=word1.length();
        int m=word2.length();
        int i=0,j=0;
        
        
        string temp="";
        while(i!=n && j!=m )
        {
            temp+=word1[i];
            i++;
            temp+=word2[j];
            j++;
            
        }
        if(i!=n)
        {
            while(i!=n)
            {
                temp+=word1[i];
                i++;
            }
        }
        if(j!=m)
        {
            while(j!=m)
            {
                temp+=word2[j];
                j++;
            }
        }
        return temp;
        
    }
    
};