class Solution {
public:
    vector<vector<int>> ans;
    //void solve(vector<int>& nums, vector<int> v, int start, int len){
    //     if(v.size() == len){
    //         ans.push_back(v);
    //         return;
    //     }
    //     for(int i = start; i < nums.size(); i++){
    //         v.push_back(nums[i]);
    //         solve(nums, v, i+1, len);
    //         solve(nums, v, i+1, len+1);
    //         v.pop_back();
    //     }
    // }
     vector<vector<int>> subsets(vector<int>& nums) {
    //     vector<int> v;
    //     ans.push_back(v);
    //     solve(nums,v,0,1);
    //     return ans;
         
         int n=nums.size();
         for(int mask=0;mask<(1<<n);mask++)
         {
             vector<int>temp;
             for(int i=0;i<n;i++)
             {
                 if(mask&(1<<i))
                     temp.push_back(nums[i]);
             }
             ans.push_back(temp);
         }
    return ans;
    }
};