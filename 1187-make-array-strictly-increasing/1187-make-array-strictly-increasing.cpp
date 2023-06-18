class Solution {
public:
    
    map<pair<int,int>,int>mp;
    
   
    
    int solve(int idx,int prev,vector<int>&arr1,vector<int>&arr2)
    {
        int n=arr1.size();
        
        // int val=INT_MIN/2;
        
      
        
        if(idx>=n)
        {
            return 0;
        }
        
       if(mp.find({idx,prev})!=mp.end())
       {
           return mp[{idx,prev}];
       }
        
       int res1=1e9+1;
        
        if(arr1[idx]>prev)
        {
            res1=solve(idx+1,arr1[idx],arr1,arr2);
            
        }  
        int  res2=1e9+1;
            
            auto itr= upper_bound(arr2.begin(),arr2.end(),prev);
            
            if(itr!=arr2.end())
            {
                int j=itr-arr2.begin();
                
           
                res2= 1+ solve(idx+1,arr2[j],arr1,arr2);
            }
            
        
        return mp[{idx,prev}]= min(res1,res2);
       // return  min(res1,res2);
        
        
}
    
    int makeArrayIncreasing(vector<int>& arr1, vector<int>& arr2) {
        mp.clear();
        
        sort(arr2.begin(),arr2.end());
        
        
        
     int  result= solve(0,INT_MIN,arr1,arr2);
        
        if(result==1e9+1)
        {
            return -1;
        }
        else 
            return result;
    }
};