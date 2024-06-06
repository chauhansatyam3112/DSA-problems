class Solution:
    def frequencySort(self, s: str) -> str:
        
        max_heap=[]
        
        mp1={}
        
        for ch in s:
            if ch in mp1:
                mp1[ch]+=1
            else:
                mp1[ch]=1
                
        for key,value in mp1.items():
            
            heapq.heappush(max_heap,(-value,key))
            
        ans=""
        
        while max_heap:
            
            freq,char=heapq.heappop(max_heap)
            
            ans+=char*(-freq)
            
        return ans    