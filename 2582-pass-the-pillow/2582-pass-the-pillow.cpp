class Solution {
public:
    int passThePillow(int n, int time) {
        
       
        if(n>time)
        {
            return  time+1;
        }
        
       
        else{
            
            int p=time/(n-1);
            
            int rem=time%(n-1);
            
            if(p%2==0)
            {
                return rem+1;
                
            }
            
            else{
                
                return n-(rem);
            }
            
        }
        
        return 0;
        
    }
};