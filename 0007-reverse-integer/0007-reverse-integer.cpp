class Solution {
public:
    int reverse(int x) {
        
        string str= to_string(x);
        
      //  reverse(str.begin(),str.end());
        string ans="";
        
        for(int i=str.length()-1;i>=0;i--)
        {
            if(str[i]=='-')
            {
                continue;
            }
            ans+=str[i];   
        }
        if(x<0)
        {
            char c='-';
            ans=c+ans;
        }
        if(stol(ans)<INT_MIN || stol(ans)>INT_MAX){
            return 0;
        }
      else
           return stoi(ans);
        
       
        
        
        
    }
        
       
    
};