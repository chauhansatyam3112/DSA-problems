class Solution {
public:
//     int mini=INT_MAX;
//     void solve(vector<int>&nums,int x,int idx)
//     {
//         if(idx>nums.size()){
                // idx=0;return;
    // }
//         for(int i=0;i<nums.size();i++)
//         {
//             if(idx+x+i<nums.size())
//             {
//                 mini=min(abs(nums[i]-nums[idx+x+i]),mini);
                
//                 solve(nums,x,idx+1);
//             }
//         }
      
//     }
    int minAbsoluteDifference(vector<int>& nums, int x) {
        
//         solve(nums,x,0);
        
//         return mini;
    int mini=INT_MAX;
      
      multiset<int>st;
    
    for(int i=x;i<nums.size();i++)
    {
        st.insert(nums[i-x]);
        
        auto it=st.upper_bound(nums[i]);
        
        if(it!=st.end()) mini=min(mini,abs(nums[i]-*it));
        
        if(it!=st.begin())mini=min(mini,abs(nums[i]-*prev(it)));
    }
    return mini;
    
   }

   
};