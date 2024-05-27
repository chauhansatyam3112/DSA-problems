class Solution {
public:
    string compressedString(string word) {
        
         string ans="";
        
        for(int i=0;i<word.length();i++)
        {
            int cnt=1;
            
            char ch=word[i];
            
            while(i<word.length() && word[i]==word[i+1])
            {
                cnt++;
                i++;
            }
            
           
            
             if(cnt<=9)
            {
                 ans+=(to_string(cnt));
                
                ans+=ch;
            }
            
            else{
                
                int rem=cnt%9;
                
                int q=cnt/9;
                
                while(q--)
                {
                    ans+="9";
                    ans+=(ch);
                    
                }
                
                if(rem>0){
                
                ans+=to_string(rem);
                ans+=(ch);
                }
                
            }
            
           
            
            
        }
         return ans;
    }
};