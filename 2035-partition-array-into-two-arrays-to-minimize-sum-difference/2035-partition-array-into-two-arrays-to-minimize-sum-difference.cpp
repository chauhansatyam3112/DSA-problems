class Solution {
public:
    int minimumDifference(vector<int>& nums) {
        
        
        int n=nums.size(),sum=0;
        
        sum=accumulate(nums.begin(),nums.end(),0);
        
         int N=n/2;
        
        
       vector<vector<int>> lsum(N + 1), rsum(N + 1);
        
       
        
        
        
        for(int i=0;i<(1<<N);++i)
        {
            int j=0,sum1=0,sum2=0;
            
            for(int idx=0;idx<N;idx++)
            {
                
                if(i & (1<<idx))
                    
                {
                    
                j++;
                sum1+=nums[idx];
                
                sum2+=nums[N+idx];
                    
                  }
            }
            
            lsum[j].push_back(sum1);
            
            rsum[j].push_back(sum2);
        }
        for(int i=0;i<=N;i++)
            
        sort(rsum[i].begin(),rsum[i].end());
        
        int mini=min(abs(sum-2*lsum[N][0]),abs(sum-2*rsum[N][0]));
        
        for(int i=1;i<N;i++)
        {
            for(auto &it:lsum[i])
            {
                int b=(sum-2*it)/2;
                
                int req=N-i;
                
                auto &v=rsum[req];
                
                auto idx=lower_bound(v.begin(),v.end(),b);
                
                   if(idx!=v.end())
                    
                  mini = min(mini, abs(sum - 2 * (it + *idx)));

            }
        }
        return mini;
   
    }
};