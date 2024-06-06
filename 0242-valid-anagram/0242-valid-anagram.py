class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        
        mp1={}
       
        for i in s:
            if i in mp1:
                mp1[i]+=1
            else:
                mp1[i]=1
                
        for j in t:
            if j in mp1:
                mp1[j]-=1
            else:
                mp1[j]=1
        
        for value in mp1.values():
            if value!=0:
                return False
            
            
        return True    
                
                
            
            
            