class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
        

        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());

        // for(int i=0;i<nums.size();i++)
        // {
        //     int start=nums[i][0];
        //     int end=nums[i][1];

        //     if(!ans.empty() && ans.back()[1]>=end)
        //     {
        //         continue;
        //     }
        //    for(int j=i+1;j<nums.size();j++)
        //    {
        //        if(nums[j][0]<=end)
        //        {
        //            end=max(nums[j][1],end);
        //        }
        //        else
        //        break;
        //    }


        //    ans.push_back({start,end});
        // }

        for(int i=0;i<nums.size();i++)
        {
            if(ans.empty() || ans.back()[1]<nums[i][0])
            ans.push_back(nums[i]);

            else{
                ans.back()[1]=max(nums[i][1],ans.back()[1]);

            }

            
        }

        return ans;
    }
};