class Solution:
    def removeOuterParentheses(self, s: str) -> str:
        
        res=""
        cnt=0
        
        for char in s:
            if char=='(':
                if cnt>0:
                    res+=char
                cnt+=1
                
            else:
                
                if cnt>1:
                    res+=char
                 
                cnt-=1
                
                
                
        return res        
               
                
               
            
           
                
                
             