class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        
        mp1={}
        mp2={}
        
        n=len(s)
        
        for idx in range(0,n):
            
            if s[idx] not in mp1 and t[idx] not in mp2:
                mp1[s[idx]]=t[idx]
                mp2[t[idx]]=s[idx]
                
            else:
                
                if mp1.get(s[idx])!=t[idx] or mp2.get(t[idx])!=s[idx]:
                    return False
                
        return True      
        
        
        