class Solution {
public:
   double solve(vector<int>&v,int index,int k,vector<vector<double>>&dp){
        if(index==v.size() || k==0)return 0;
        double sum=0;
        if(dp[index][k]!=-1)return dp[index][k];
        if(k==1){
            for(int i=index;i<v.size();i++)
            sum+=v[i];
            return dp[index][k]=(sum/(v.size()-index));
        }
        sum=0;
        double res=0;
        double counter=0;
        for(int i=index;i<v.size();i++){
         sum+=v[i];
         counter++;
         double ans=solve(v,i+1,k-1,dp)+(sum/(counter));
         res=max(res,ans);
        }
        return dp[index][k]=res;
    }
    double largestSumOfAverages(vector<int>& nums, int k) {
        vector<vector<double>>dp(nums.size(),vector<double>(k+1,-1));
        return solve(nums,0,k,dp);
    
    }
};