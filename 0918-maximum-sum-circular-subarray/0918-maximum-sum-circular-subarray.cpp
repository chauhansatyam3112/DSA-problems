class Solution {
public:
    
    int kadane(vector<int>nums)
    {
        
        int maxi=0;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            
            maxi=max(sum,maxi);
            if(sum<0)
            sum=0;
        }
        return maxi;
    }
    int maxSubarraySumCircular(vector<int>& nums) {
        int sum=0;
        bool positive=false;
        int nonwrap=kadane(nums);
        
        int p=*max_element(nums.begin(),nums.end());
          
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(nums[i]>0){
            positive=true;
                
            }
            nums[i]=-nums[i];
        }
          if(!positive){
                return p;}
        
        
        
         
        
        
        int max_sum=sum-(-kadane(nums));
        return max(nonwrap,max_sum);
        
        
        
    }
};