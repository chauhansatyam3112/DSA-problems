class Solution {
public:
    int lengthOfLastWord(string s) {
        
       
        if(s.length()==1)return 1;
       
        
      
        
       for(int i=s.length()-1;i>=0; i--)
       {
           if(s[i]==' ')
               
               continue;
           
           else{
               
               int j=i;
               
               cout<<j<<endl;
               
               while(j>=0 && s[j]!=' ')
               {
                   j--;
               }
               
               return (i-j);
               
           }
           

           
       }
        
        return 0;
        
      
        
    }
};