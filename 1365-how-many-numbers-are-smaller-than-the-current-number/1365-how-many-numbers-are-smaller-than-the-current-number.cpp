class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n=nums.size();int j=0;int count=0;
        vector<int>v=nums;
        vector<int>ans;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++){
            if(i!=j && nums[j]<nums[i])
            {
            count ++;
            }
               
                
            } 
             ans.push_back(count);
            count =0;
        }
        return ans;
        /*for(auto it:v)
        {
            sort(v.begin(),v.end());
        }
        for(int i=n-1;i>=0;i--)
        {
          mp[v[i]]=i;  
        }
        for(int i=0;i<n;i++)
        {
            nums[i]=mp[nums[i]];
        }
        return nums;*/
        
    }
};