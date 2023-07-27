class Solution {
public:
//     void solve(int i,vector<int>&arr,int target,set<vector<int>>&ans,vector<int>&ds){
//         if(i==arr.size()){
//             if(target==0){
//                 vector<int>temp;
//                 temp=ds;
//                 sort(temp.begin(),temp.end());
//                 ans.insert(temp);
//             }
//             return;
//         }
//         if(arr[i]<=target){
//             ds.push_back(arr[i]);
//             solve(i+1,arr,target-arr[i],ans,ds);
//             ds.pop_back();
//         }
//         int idx = i;
//         while (idx < arr.size() && arr[i] == arr[idx])
//             idx++;
//         solve(idx,arr,target,ans,ds);
//     }
// 	vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
//         set<vector<int>>ans;
//          vector<vector<int>>res;
//         vector<int>ds;
        
//         solve(0,arr,target,ans,ds);
        
//         for(auto it: ans){
//             res.push_back(it);
//         }
//         return res;
    
    void solve(vector<vector<int>>&ans,vector<int>&res,int target,int idx,vector<int>&nums)
    {
        if(target==0)
        {
            ans.push_back(res);return;
        }
        
        
        
        for(int i=idx;i<nums.size();i++)
        {
            if(i>idx && nums[i]==nums[i-1])continue;
            
            if(nums[i]>target)break;
            
            res.push_back(nums[i]);
            
            solve(ans,res,target-nums[i],i+1,nums);
            
            res.pop_back();
            
            
        }
        
    }
    	vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
            sort(arr.begin(),arr.end());
            vector<vector<int>>ans;
            
            vector<int>res;
            solve(ans,res,target,0,arr);
            return ans;
            
    
        
    }
};