class Solution {
public:
    
    bool isPossible(string &s, int mid,unordered_map<char,vector<int>>&mp)
    {
        int cnt=0;

        for(auto it:mp)
        {
            cnt=0;
            
            vector<int>v=it.second;
            
            for(auto itr:v)
            {
                cnt+=max(0,itr-mid+1);
            }
            
            if(cnt>=3)return true;
            
        }
        return false;
    }
    
    
    int maximumLength(string s) {
        
        
        unordered_map<char,vector<int>>mp;
        
       char last=s[0];
        
        int cnt=1;
        
        for(int i=1;i<s.length();i++)
        {
            
            if(s[i]==last)
            {
                cnt++;
            }
            
            else{
                mp[last].push_back(cnt);
                
                last=s[i];
                cnt=1;
            }
        }
         mp[last].push_back(cnt);
        
        int left=1,right=s.length()-2;
        
        int ans=-1;
        
        while(left<=right)
        {
            int mid=left+(right-left)/2;
            
            if(isPossible(s,mid,mp))
            {
                ans=mid;
                left=mid+1;
            }
            
            else{
                right=mid-1;
            }
        }
        
        return ans;
    }
};