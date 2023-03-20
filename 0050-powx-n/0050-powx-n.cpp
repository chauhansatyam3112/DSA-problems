class Solution {
public:
    double myPow(double x, int n) {
        
        //n=8... n%2==0 so x^8-> (x*x)^4->myPow(x*x*x*x,2)->
    
        // if(n%2 odd)  x*(x*x)^n/2;
        
        //
         
        if(n==0){
            return 1;
        }
        if (n < 0) { 
            n = abs(n);
            x = 1/x;
        }
        if(n%2==0){
            return myPow(x*x,n/2);
        
        }else{
            return x*myPow(x*x,n/2);
        }
    }
};