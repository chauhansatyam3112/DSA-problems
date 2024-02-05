class Solution {
public:
    
   vector<int> LPS(string &str)
        
  {

    vector<int> lps(str.length(), 0);

    int length = 0;
    int i = 1;

    while (i < str.length())
    {
        if (str[i] == str[length])
        {
            length++;
            
            lps[i] = length;
            
            i++;
        }
        else
        {

            if (length != 0)
            {
                length = lps[length - 1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
    return lps;
}
    
    
    
    int minimumTimeToInitialState(string word, int k) {
        
         vector<int>lps=LPS(word);
        
        int n=word.length();
        
        int maxi=lps[n-1];
        
        while(maxi>0 && (n-maxi)%k!=0)
        {
            maxi=lps[maxi-1];
            
        }
        
        if((n-maxi)%k==0)return (n-maxi)/k;
        
        else
            return (n+k-1)/k;
        
        
    }
};