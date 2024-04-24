class Solution {
public:
    int tribonacci(int n) {
        
        int a=0,b=1,c=1;
        
        if(n==1 || n==2 )return 1;
        
       
        int sum=0;
        
        int ans=0;
        
        for(int i=3;i<=n;i++)
        {
           sum=a+b+c;
          
            
           a=b;b=c;c=sum;
            
           
            
           
            
        }
        
        return sum;
        
        
    }
};