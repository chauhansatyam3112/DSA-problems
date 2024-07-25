class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        
       
        int ans=0;
        
        for(int i=0;i<nums.size();i++)
        {
             int cnt1=0,cnt2=0;
            
            int p=nums[i];
            
            
            while(p%3!=0)
            {
                p++;
                cnt1++;
            }
            
            p=nums[i];
            
            while(p>0 && p%3!=0)
            {
                p--;
                cnt2++;
                
                
            }
            
            ans+=min(cnt1,cnt2);
            
        }
        return ans;
    }
};