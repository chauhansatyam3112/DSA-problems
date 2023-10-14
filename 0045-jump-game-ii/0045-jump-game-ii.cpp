class Solution {
public:
    int jump(vector<int>& nums) {
        
        int curr=0,jump=0,maxjump=0;
        
        if(nums.size()==1)return 0;
        
        for(int i=0;i<nums.size();i++)
        {
            maxjump=max(nums[i]+i,maxjump);
            
            if(curr==i)
            {
                curr=maxjump;
                jump++;
                
                 if(maxjump>=(nums.size()-1))break;
            }
            
          
        }
        return jump;
        
    }
};