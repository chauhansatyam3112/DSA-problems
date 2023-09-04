class Solution {
public:
    bool isHappy(int n) {
        
        
        set<int>st;
        
        int sum=n;
        
        while(n!=1)
        {
            if(st.find(n)==st.end())
                st.insert(n);
            
            else{
                return false;
            }
            
            int sum=0;
            while(n)
            {
             sum+=pow(n%10,2);
               
              n=n/10;
                
                
            }
           n=sum;
            
        }
        return true;
    }
};