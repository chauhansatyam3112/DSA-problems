class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        
        
        
        strs.sort()
        
        n=len(strs)
        
        str1=strs[0]
        str2=strs[n-1]
        
        if str1=="":
            return ""
        
       
        
        
        for idx in range(0,len(str1)):
            
            if str1[idx]==str2[idx]:
                idx+=1
                
            else:
                break
                
        return str1[:idx]
        
        
                
                
                
                
                
                
       
    
            
            
        
        
       
            
            
            
        