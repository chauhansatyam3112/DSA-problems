class Solution {
public:
    
    int solve(vector<int>&nums,int target,int idx)
    {
        
     
        if(idx==0)
        {
            if((target-nums[0]==0|| target+nums[0]==0) && nums[0]!=0)
            {
                return 1;
            }
            else if(nums[0]==0 && target==0)
            {
                return 2;
                
            }
            else
                return 0;
          
            
           
        }
        
        
        int takePos=solve(nums,target+nums[idx],idx-1);
        int takeNeg=solve(nums,target-nums[idx],idx-1);
        
        return takePos+takeNeg;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        
        
        return solve(nums,target,nums.size()-1);
    }
};