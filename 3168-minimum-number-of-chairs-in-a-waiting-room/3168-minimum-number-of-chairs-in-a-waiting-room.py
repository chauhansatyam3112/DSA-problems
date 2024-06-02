class Solution:
    def minimumChairs(self, s: str) -> int:
        
        fill=0
        maxi=0
        
        for char in s:
            if char=='E':
                fill+=1
                maxi=max(maxi,fill)
                
            else:
                fill-=1
                
                
             
        return maxi    
                
              
        