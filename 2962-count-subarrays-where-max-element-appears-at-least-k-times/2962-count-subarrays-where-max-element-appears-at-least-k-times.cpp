class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        
        int maxi=*max_element(nums.begin(),nums.end());
        
        int i=0,j=0;
        long long ans=0;
        
        
        vector<int>indices;
        
       for(int i=0;i<nums.size();i++)
        {
           if(nums[i]==maxi)
           {
               indices.push_back(i);
           }
           
           int n=indices.size();
           
           if(n>=k)
           {
               int idx=indices[n-k];
               
               ans+=(idx+1);
           }
           
            
        }
        return ans;
    }
};