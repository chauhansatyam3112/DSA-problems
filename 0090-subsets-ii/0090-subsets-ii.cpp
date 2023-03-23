class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
          unordered_set<string> seen;
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
         int n=nums.size();
         for(int mask=0;mask<(1<<n);mask++)
         {
             string temp1="";
             vector<int>temp;
             for(int i=0;i<n;i++)
             {
                 if(mask&(1<<i)){
                     temp.push_back(nums[i]);
                  temp1+=to_string(nums[i])+",";}
             }
             if(!seen.count(temp1))
             {
                 seen.insert(temp1);
                 ans.push_back(temp);
                                  
                 

                     
             }
            
             
         }
    return ans;
    }
};