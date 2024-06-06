class Solution:
    def rotateString(self, s: str, goal: str) -> bool:
        
        if len(s)!=len(goal):
            return False
        
        res=s+s
        
        idx=res.find(goal)
        
        if idx==-1:
            return False
        
        return True
        