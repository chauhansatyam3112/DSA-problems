class Solution:
    def isNStraightHand(self, hand: List[int], k: int) -> bool:
        
        n=len(hand)
        
        if n % k != 0:
            return False
    
        
        m=n//k
        
        mp={}
        
        for idx in hand:
            if idx in mp:
                mp[idx]+=1
            else:
                mp[idx]=1
                
        for i in range(1,m+1):
            
            val=min(mp)
            
            for j in range(val,val+k):
                
                if j not in mp:
                    return False
                
                mp[j]-=1
                
                if mp[j]==0:
                    del mp[j]
                    
        return True         
                    
                      
            
            
            