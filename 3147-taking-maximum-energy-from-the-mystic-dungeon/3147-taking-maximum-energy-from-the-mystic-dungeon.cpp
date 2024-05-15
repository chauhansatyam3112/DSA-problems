class Solution {
public:
     int solve(int idx, vector<int>& nums, vector<int>& dp, int k) {
         
         
        int n = nums.size();
        
        if (idx >= n) return 0; 
        
        if (dp[idx] !=-1) return dp[idx]; 
        
        int maxi = INT_MIN;
         
        int sum = 0;
        
    
            
           
        sum=nums[idx]+solve(idx+k,nums,dp,k);
                
         maxi=max(maxi,sum);
            
           
      
        
       
        return dp[idx] = maxi;
    }
    
    int maximumEnergy(vector<int>& energy, int k) {
        
        int n = energy.size();
        
        vector<int> dp(n, -1); 
        
        int maxi=INT_MIN;
        
        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,solve(i,energy,dp,k));
        }
        
        return maxi;
    }
};