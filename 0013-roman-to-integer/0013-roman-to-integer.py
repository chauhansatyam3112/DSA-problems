class Solution:
    def romanToInt(self, s: str) -> int:
        
        mp1 = {
        'I': 1,
        'V': 5,
        'X': 10,
        'L': 50,
        'C': 100,
        'D': 500,
        'M': 1000
    }
        
        total=mp1[s[-1]]
        
        for i in range(len(s)-2,-1,-1):
            
            if(mp1[s[i]]>=mp1[s[i+1]]):
                total+=mp1[s[i]]
                
            else:
                total-=mp1[s[i]]
                
                
        return total       
                
                
            
    
        