class Solution:
   
 def reverseWords(self, s: str) -> str:
    ans = ""
    i = 0
    n = len(s)
    
    while i < n:
        while i < n and s[i] == ' ':
            i += 1
        
        if i >= n:
            break
                
        j = i
        while j < n and s[j] != ' ':
            j += 1
            
        p = s[i:j]
        
        if ans=="":
            ans = p
        else:
            ans = p + ' ' + ans
            
        i = j + 1
        
    return ans