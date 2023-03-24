class Solution {
public:
   void solve(vector<int>& nums,vector<int>&curr,set<vector<int>>&st,int pos)
    {
        if(pos==nums.size())
        {
            st.insert(curr);
            return;
        }
       
    else{
        //pick
        curr.push_back(nums[pos]);
        solve(nums,curr,st,pos+1);
        curr.pop_back();
        //not pick
        solve(nums,curr,st,pos+1);
        

    }
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
         sort(nums.begin(),nums.end());
        vector<int>curr;
        vector<vector<int>>ans;
        set<vector<int>>st;
        solve(nums,curr,st,0);
        for(auto it:st)
        {
            ans.push_back(it);
        }
        return ans;
        
        
        
//           unordered_set<string> seen;
//         vector<vector<int>>ans;
//         sort(nums.begin(),nums.end());
//          int n=nums.size();
//          for(int mask=0;mask<(1<<n);mask++)
//          {
//              string temp1="";
//              vector<int>temp;
//              for(int i=0;i<n;i++)
//              {
//                  if(mask&(1<<i)){
//                      temp.push_back(nums[i]);
//                   temp1+=to_string(nums[i])+",";}
//              }
//              if(!seen.count(temp1))
//              {
//                  seen.insert(temp1);
//                  ans.push_back(temp);
                                  
                 

                     
//              }
            
             
//          }
//     return ans;
        
        //using recursion  && backtracking
        
        
        
        
    }
};