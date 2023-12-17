class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        
        
        vector<vector<int>>ans;
     
        sort(nums.begin(),nums.end());
        
        vector<int>v;
        
        int j=0;
        
        for(int i=0;i<nums.size();i++)
        {
            
            
           
            
           if(nums[i+2]-nums[i]>k && i%3==0 && i<nums.size()) return {};
            
            if(i==nums.size()-2)
            {
                j=i;
                break;
            }
            
           
           v.push_back(nums[i]);
            
            
           if(v.size()==3)
           {
               ans.push_back(v);
               
               v.clear();
           }
            
        }
        
       
        
        for(int i=j;i<nums.size();i++)
        {
            v.push_back(nums[i]);
        }
        
        ans.push_back(v);
        
        return ans;
    }
};