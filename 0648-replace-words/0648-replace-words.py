class Solution:
    def replaceWords(self, nums: List[str], sen: str) -> str:
        
        i=0
        j=0
        
        n=len(nums)
        m=len(sen)
        
        res=""
        
        while i<m:
            
            j=i
            
            while j<m and sen[j]!=' ':
                j+=1
                
        
            temp=sen[i:j]
            flag=False
            
            i=j+1
            
            word=""
            
            for char in temp:
                
                word+=char
                
                if word in nums:
                    
                    flag=True
                    
                    if len(res)==0:
                        res+=word
                    else:
                        res+=' '+word
                    
                    break 
                    
            if not flag:
                    if len(res)==0:
                        res+=temp
                    else:
                        res+=' '+temp       
                    
                
                        
        return res             
                
                 
                 
             
                        
                    
                    
                    
                    
                
               
                    
                
            
            
                