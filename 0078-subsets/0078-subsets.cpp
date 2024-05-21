class Solution {
public:
set<int>st;
void solve(vector<int>&res,vector<vector<int>>&ans,vector<int>&nums,int i)
{
    if(i>=nums.size())
    {
        
        
        ans.push_back(res);return;
    }

    res.push_back(nums[i]);
    
    solve(res,ans,nums,i+1);
    res.pop_back();

    solve(res,ans,nums,i+1);


}
    vector<vector<int>> subsets(vector<int>& nums) {
        

        vector<int>res;
        vector<vector<int>>ans;
       
        solve(res,ans,nums,0);
        return ans;



    }
};