class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        
         int sum=0;
        
        int start=0,end=0;
        
        int maxi=0;
        
        for(int i=0;i<customers.size();i++)
            
            if(grumpy[i]==0)
            sum+=customers[i];
      
        while(end<customers.size())
        {
            if(grumpy[end]==1)
                
                sum+=customers[end];
            
            if((end-start+1)<minutes)
                
                end++;
            
           else if((end-start+1)==minutes)
            {
                maxi=max(maxi,sum);
               
                if(grumpy[start]==1)
                    
                    sum-=customers[start];
               
                start++;
                end++;
            }
        }
        return maxi;
    
    }
};