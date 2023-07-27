class Solution {
public:
    void solve(vector<int>&nums,set<vector<int>>&res,int i,vector<int>&v)
    {
        if(i>=nums.size())
        {
            vector<int>temp;
            temp=v;
            sort(temp.begin(),temp.end());
          
            res.insert(temp);return;
        }
        
      v.push_back(nums[i]);
        
        solve(nums,res,i+1,v);
        
        v.pop_back();
        
        solve(nums,res,i+1,v);
        
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        set<vector<int>>res;
         
        vector<int>v;
        
        solve(nums,res,0,v);
        
        vector<vector<int>>ans(res.begin(),res.end());
        return ans;
        
    }
};