class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>ans;
        for(auto it:nums)
        {
            if(ans.empty()||ans[ans.size()-1]<it)
                ans.push_back(it);
            else{
                auto itr=lower_bound(ans.begin(),ans.end(),it);
                *itr=it;
            }
        }
        return ans.size();
    }
};