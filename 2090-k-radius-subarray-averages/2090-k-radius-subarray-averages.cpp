class Solution {
public:
  #define ll long long
    vector<int> getAverages(vector<int>& nums, int k) {
        
        int n=nums.size();
        vector<ll>pre_sum(n,0);
        pre_sum[0]=nums[0];
        
        for(int i=1;i<n;i++)
        {
            pre_sum[i]=nums[i]+pre_sum[i-1];
            
        }
        vector<int >ans(n);
        
        for(int i=0;i<n;i++)
        {
         
            if(i-k==0 && i+k<n)
            {
             ans[i]= (pre_sum[i+k])/(2*k+1);   
            }
           else if(i-k>0 && i+k<n)
            {
                ans[i]=(pre_sum[i+k]-pre_sum[i-k-1])/(2*k+1);
            }
            else
                ans[i]=-1;
            
        }
        return  ans;
        
    }
};