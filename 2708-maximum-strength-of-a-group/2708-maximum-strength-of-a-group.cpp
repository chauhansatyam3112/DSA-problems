class Solution {
public:
    vector<vector<int>>v;
    void solve(vector<int>&nums,int i,vector<int>&temp)
    {
        int n=nums.size();
        if(i==n)
        {
            v.push_back(temp);
            return;
        }
        
        //pick
        temp.push_back(nums[i]);
        
        solve(nums,i+1,temp);
        
        temp.pop_back();
        
        solve(nums,i+1,temp);
        
        
    }
    
    long long maxStrength(vector<int>& nums) {
        long long maxi=INT_MIN;
        
        vector<int >temp;
        
        solve(nums,0,temp);
        
        for(int i=0;i<v.size();i++)
        {
            if(v[i].size()==0)continue;
            long long p=v[i][0];
            for(int j=1;j<v[i].size();j++)
            {
//                 if(v[i][j]==-1)
//                 {
//                     p=-1;
                
//                 }
                // else
                 p*=v[i][j];
            }
            maxi=max(p,maxi);
        }
        return maxi;
    }
};