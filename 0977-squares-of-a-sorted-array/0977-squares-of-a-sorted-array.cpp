class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        multiset<int>st;
        for(auto it:nums)
        {
            st.insert(it*it);
        }
        
        vector<int>ans(st.begin(),st.end());
        return ans;
    }
};