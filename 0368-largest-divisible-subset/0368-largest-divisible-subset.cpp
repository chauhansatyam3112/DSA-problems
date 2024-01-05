class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n=nums.size();
        
        sort(nums.begin(),nums.end());
         vector<int>dp(n,1),hash(n,1);
        int maxi=1;
        int idx=0;
        for(int i=0;i<n;i++)
        { 
            hash[i]=i;
            
            for(int prev=0;prev<i;prev++)
            {
                if(1+dp[prev]>dp[i] && nums[i]%nums[prev]==0)
                {
                    dp[i]=1+dp[prev];
                    hash[i]=prev;
                }
            }
         
            if(maxi<dp[i])
            {
                maxi=dp[i];idx=i;
            }
            
        }
        vector<int>v;
        v.push_back(nums[idx]);
        while(hash[idx]!=idx)
        {
            idx=hash[idx];
            v.push_back(nums[idx]);
            
            
        }
        reverse(v.begin(),v.end());
        for(auto it:v)cout<<it<<" ";
        return  v;
              // int n=nums.size();
//         vector<int>v;
        
//         v.push_back(nums[0]);
        
//         for(int i=1;i<nums.size();i++)
//         {
//             int x=nums[i];
            
//             if(x>v.back() && v.back()%x==0)
//             {
//                 v.push_back(x);
//             }
//             else{
                
//                 auto idx=lower_bound(v.begin(),v.end(),x)-v.begin();
                
                
                
//                 v[idx]=x;
                
//             }
//         }
//         return v;
   
        
    }
};