class Solution {
public:
    
    long long nCr(int n,int r)
    {
        long long ans=1;
        
        for(int i=0;i<r;i++)
        {
            ans=ans*(n-i);
            
            ans=ans/(i+1);
        }
        
        return ans;
        
    }
    
    int waysToReachStair(int k) {
        
        int ans=0;
        
        if(k==0|| k==4)return 2;
        
        if(k==1 || k==2)return 4;
       
        long long powof2=ceil(log2(k));
        
        long long num=pow(2,powof2);
        
        long long r=num-k;
        
        if(r<0 || r>(powof2+1))return 0;
        
       ans=nCr(powof2+1,r);
        
        return int(ans);
        
    }
};