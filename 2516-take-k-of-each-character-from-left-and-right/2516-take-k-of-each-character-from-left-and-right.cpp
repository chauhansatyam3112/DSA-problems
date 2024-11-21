class Solution {
public:
    int takeCharacters(string s, int k) {
        
        // aabaaaacaabc

        int cnt_a=0,cnt_b=0,cnt_c=0;
        
        int n=s.length();
        
        int maxi=0;
        
        for(auto it:s)
        {
            if(it=='a')cnt_a++;
            else if(it=='b')cnt_b++;
            else cnt_c++;
        }
        
        if(cnt_a<k ||cnt_b<k || cnt_c<k)return -1;
        int i=0,j=0;
        while(j<n)
        {
            
                if(s[j]=='a')cnt_a--;
                else if(s[j]=='b')cnt_b--;
                else cnt_c--;
        
            
            
            while(i<=j && (cnt_a<k || cnt_b<k || cnt_c<k))
            {
                if(s[i]=='a')cnt_a++;
                else if(s[i]=='b')cnt_b++;
                else cnt_c++;
                i++;
            }
            maxi=max(maxi,j-i+1);
            j++;
                
            
            
                 
            
        }
        return n-maxi;
    }
};