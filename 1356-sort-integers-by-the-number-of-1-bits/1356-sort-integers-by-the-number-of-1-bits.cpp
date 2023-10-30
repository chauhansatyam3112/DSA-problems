class Solution {
public:
    static bool comp(pair<int,int>a,pair<int,int>b)
    {
         if(a.first==b.first)
         {
             return a.second<b.second;
         }
           return a.first<b.first;
    }
    vector<int> sortByBits(vector<int>& arr) {
        
        vector<pair<int,int>>v;
        
        for(int i=0;i<arr.size();i++)
        {
            
            int cnt=0;
            
            int num=arr[i];
            
            while(num>0)
            {
                if(num&1)cnt++;
                
             num >>=1;
                
            }
            v.push_back({cnt,arr[i]});
        }
        
        sort(v.begin(),v.end(),comp);
        vector<int>ans;
        
        for(auto it:v)
        {
            ans.push_back(it.second);
            
        }
        return ans;
        
        
    }
};