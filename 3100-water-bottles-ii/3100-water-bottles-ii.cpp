class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        
        
        int full=0,empty=0,exchange=0,drunk=0;
        
    
        drunk=numBottles;
        
        exchange=numExchange;
        
        empty=numBottles;
        
        full=0;
        
        while(empty>=exchange)
        {
            empty=empty-exchange;
            
            full++;
            
            exchange++;
            
            if(empty<=exchange && full!=0)
            {
               empty+=full;
               
                   drunk+=full;
               
                full=0;     
            }
        }
        
        return drunk+full;
    }
};