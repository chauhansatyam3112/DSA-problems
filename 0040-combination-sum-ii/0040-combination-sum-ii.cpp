class Solution {
public:
    void solve(int i,vector<int>&arr,int target,set<vector<int>>&ans,vector<int>&ds){
        if(i==arr.size()){
            if(target==0){
                vector<int>temp;
                temp=ds;
                sort(temp.begin(),temp.end());
                ans.insert(temp);
            }
            return;
        }
        if(arr[i]<=target){
            ds.push_back(arr[i]);
            solve(i+1,arr,target-arr[i],ans,ds);
            ds.pop_back();
        }
        int idx = i;
        while (idx < arr.size() && arr[i] == arr[idx])
            idx++;
        solve(idx,arr,target,ans,ds);
    }
	vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        set<vector<int>>ans;
         vector<vector<int>>res;
        vector<int>ds;
        
        solve(0,arr,target,ans,ds);
        
        for(auto it: ans){
            res.push_back(it);
        }
        return res;
        
    }
};