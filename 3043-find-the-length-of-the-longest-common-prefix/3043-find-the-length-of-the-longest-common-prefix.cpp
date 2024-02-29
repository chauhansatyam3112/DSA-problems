class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        
        unordered_map<int,int>mp;
        
        for(auto it:arr1)
        {
            while(it>0)
            {
                mp[it]++;
                
                it/=10;
            }
        }
        
        int maxi=0;
        
        for(auto it:arr2)
        {
            while(it>0)
            {
                if(mp.find(it)!=mp.end())
                {
                    int p=it;
                    
                    string k=to_string(p);
                    
                    int len=k.length();
                    
                    maxi=max(maxi,len);
                    
                }
                 it/=10;
            }
            
           
        }
        
        return maxi;
    }
};