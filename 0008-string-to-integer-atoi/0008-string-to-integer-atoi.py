class Solution:
    def myAtoi(self, s: str) -> int:
        sign=1
        s=s.strip()
        if s=="": 
            return 0
        char=s[0]
        if char=="-" or char=="+":
            s=s[1:]
            if char=="-":
                sign=-1
        ans=0
        for ch in s:
            if '0'<=ch<='9':
                ans=ans*10+(int(ch))
            else:
                break
        ans = ans*sign     
        if ans<-2147483648:
            return -2147483648
        elif ans>2147483647:
            return 2147483647
        
        return ans

        