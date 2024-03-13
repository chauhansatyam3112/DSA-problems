class Solution {
public:
    int pivotInteger(int n) {
        
        
        
       unordered_map<int,int>st;
        
        int sum=0;
        
        for(int i=1;i<=n;i++)
        {
            
            sum+=i;
            
            st.insert({sum,i});
            
        }
        
        sum=0;
        
        for(int i=n;i>=1;i--)
        {
                sum+=i;
       
                if(st.find(sum)!=st.end() && st[sum]==i)
                {
                    return i;
                }
                
               
                
            
           
        }
        
        return -1;
    }
};