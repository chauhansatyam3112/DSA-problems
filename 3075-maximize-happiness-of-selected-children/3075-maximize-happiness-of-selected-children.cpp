class Solution {
public:
    long long maximumHappinessSum(vector<int>& nums, int k) {
            
            sort(nums.rbegin(),nums.rend());
            
            int cnt=0;
            
            long long sum=0;
            
            for(int i=0;i<nums.size() && k-- ;i++)
            {
                    if(nums[i]-cnt>0)
                            
                    sum+=(nums[i]-cnt);
                    
                    cnt++;
            }
            
            
        
 
            return sum;
            
           
    }
};