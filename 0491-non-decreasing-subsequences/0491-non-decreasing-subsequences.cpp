class Solution {
public:
    set<vector<int>>st;
    vector<int>temp;
    void solve(vector<int>&nums,int i)
        
    {
        if(i==nums.size()){
        if(temp.size()>=2)
            st.insert(temp);
        return;
        }
        
        if(temp.empty()|| temp.back()<=nums[i]){
            temp.push_back(nums[i]);
        solve(nums,i+1);
        temp.pop_back();}
        
        
        solve(nums,i+1);
        
            
        
            
    }
    
   
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        
        solve(nums,0);
        return vector(st.begin(),st.end());
    }
};