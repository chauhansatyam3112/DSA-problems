class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        
        int j=0,i=0;
        int cnt=0,maxi=INT_MIN;
        
        while(j<nums.size())
        {
            
            if(nums[j]==0)
            {
                cnt++;
            }
            
            while(cnt>k)
            {
                if(nums[i]==0)
                {
                    cnt--;
                }
                i++;
            }
            maxi=max(maxi,j-i+1);
            j++;
        }
        return maxi;
    }
};