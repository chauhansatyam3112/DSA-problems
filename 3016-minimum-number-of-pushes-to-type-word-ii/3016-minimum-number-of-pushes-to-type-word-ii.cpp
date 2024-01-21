class Solution {
public:
    int minimumPushes(string word) {
        
        
        vector<int>v(26,0);
        
        for(int i=0;i<word.size();i++)
        {
            v[word[i]-'a']++;
        }
        
        sort(v.begin(),v.end(),greater<int>());
        
        int ans=0;
        
        int cnt=0;
        
        for(int i=0;i<v.size();i++)
        {
            cnt++;
            
            if(cnt<=8)
            {
                ans+=(v[i]*1);
            }
            else if(cnt<=16)
            {
                ans+=(v[i]*2);
            }
            else if(cnt<=24)
            {
                ans+=(v[i]*3);
            }
            
            else{
                ans+=(v[i]*4);
            }
            
        }
        return ans;
        
    }
};