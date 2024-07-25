class Solution {
public:
    int minOperations(vector<int>& nums) {
        
           int l=0, r=2, ans=0, n = nums.size();
        
        while(r < n){

            if(nums[l] == 0){
                
                nums[l] = 1-nums[l];
                
                nums[l+1] = 1-nums[l+1];
                
                nums[l+2] = 1-nums[l+2];   
                
                ans++;
            }
            
            if(nums[l]==1) l++; 
            
            r=l+2;
        }

        int sum = nums[n-1] + nums[n-2] + nums[n-3];
        
        return (sum==3)?ans:-1;
    
    }
};