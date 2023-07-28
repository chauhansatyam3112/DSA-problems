class Solution {
public:
    
    void solve(vector<vector<int>>&ans,vector<int>&res,int k,int n,int sum,int cnt,int idx){
        
       if(cnt==k){
            if(n==sum){
            ans.push_back(res);  
                return;
            }
           
       }
    
    for(int i=idx;i<=9;i++)
    {
        
           // break;
          
        
        
        res.push_back(i);
        sum+=i;
        
        solve(ans,res,k,n,sum,cnt+1,i+1);
        sum-=i;
        
        res.pop_back();
        
    }
        
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        
        if(k>n)return {};
        
        vector<int>res;
        vector<vector<int>>ans;
        
        
        solve(ans,res,k,n,0,0,1);
        
        
        return ans;
    }
};