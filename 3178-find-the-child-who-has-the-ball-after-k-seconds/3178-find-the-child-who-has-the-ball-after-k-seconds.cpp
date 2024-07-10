class Solution {
public:
    int numberOfChild(int n, int k) {
        
       
        if(n>k)
        {
            return k;
        }
        else{
            
            int q=k/(n-1);
            int rem=k%(n-1);
            
            
            
            if(q%2==0)
            {
                return rem;
            }
            else{
                return abs((n-1)-rem);
            }
        }
        
        return 1;
    }
        
    
};