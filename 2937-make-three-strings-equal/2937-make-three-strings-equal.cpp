class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
 
        
        if(s1[0]!=s2[0] || s2[0]!=s3[0] || s1[0]!=s2[0])
        {
            return -1;
        }
        
        int cnt1=0;
        
        int i=1,j=1;
        
        int len=min({s1.length(),s2.length(),s3.length()});
     
        while(i<len && j<len)
        {
            if(s1[i]==s2[j] && s1[i]==s3[j])
            {
                i++;j++;
            }
            else
                break;
            
        }
        
        while(i<s1.length())
        {
            cnt1++;
            i++;
        }
        while(j<s2.length())
        {
            cnt1++;
            j++;
        }
        
        
        int k=1,l=1;
        
      
        
        while(k<len && l<len)
        {
            if(s2[k]==s3[l] && s3[l]==s1[l])
            {
                 k++;l++;
                
            }
            else
                break;
            
            
           
            
        }
        while(l<s3.length())
        {
            cnt1++;
            l++;
        }
        
    return cnt1;
        
        
        
       
    }
};