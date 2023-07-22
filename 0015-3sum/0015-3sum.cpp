class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        
        sort(nums.begin(),nums.end());
       set<vector<int>> st;
        vector<vector<int>>ans;
        
        for(int i=0;i<nums.size()-1;i++)
        {
            int sum=nums[i];
            
            int j=i+1;
            int k=nums.size()-1;
            
            while(j<k)
            {
                if(nums[j]+nums[k]+sum==0)
                {
                    st.insert({nums[i],nums[j],nums[k]});
                    j++;k--;
                }
                else if(nums[j]+nums[k]+sum>0)
                {
                    k--;
                }
                else
                {
                    j++; 
                }
            }
           
        }
         
            for(auto it:st)
            {
                ans.push_back(it);
            }
        return ans;
        
    }
};