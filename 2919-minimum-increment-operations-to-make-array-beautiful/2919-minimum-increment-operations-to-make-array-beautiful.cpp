class Solution {
public:
    long long minIncrementOperations(vector<int>& nums, int k) {
        
        
        long ans=0;
        int n=nums.size();
        
        for(int i=1;i<n-1;i++){
            
            int maxi=max({nums[i-1],nums[i],nums[i+1]});
            
            if(maxi<k){
                
                nums[i-1]+=(k-maxi);
                
                 nums[i]+=(k-maxi);
                
                 nums[i+1]+=(k-maxi);
                
                ans+=(k-maxi);
            }
            
        }
        return ans;
    }
};