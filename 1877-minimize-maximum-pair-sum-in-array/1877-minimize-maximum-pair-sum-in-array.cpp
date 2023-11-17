class Solution {
public:
    int minPairSum(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        
        int n=nums.size();
        
        int maxi=0;
        int mini=INT_MAX;
        
        for(int i=0;i<(n/2);i++)
        {
           int sum=nums[i]+nums[n-i-1];
           
           maxi=max(maxi,sum); 
        }
        return maxi;
    }
};