class Solution {
public:
    bool check(string &curr_str,vector<int>&v1)
    {
        vector<int>temp(26,0);
        
        for(int i=0;i<curr_str.length();i++)
        {
            if(temp[curr_str[i]-'a']==1)return false;
            temp[curr_str[i]-'a']=1;
            
           
        }
         for(int i=0;i<curr_str.length();i++)
            {
                if(v1[curr_str[i]-'a']==1)return false;
                
            }
            return true;
            
        
        
    }
    
    void solve(vector<string>&words,vector<int>&v1,int len,int idx,int &ans)
    {
        //base 
        
        if(idx>=words.size())
        {
            ans=max(ans,len);
            return;
            
        }
        if(check(words[idx],v1))
        {
            string curr=words[idx];
            for(int i=0;i<words[idx].size();i++)
            {
                v1[curr[i]-'a']=1;
            }
            //include
            solve(words,v1,len+curr.size(),idx+1,ans);
            //backtrack
            for(int i=0;i<words[idx].size();i++)
            {
                v1[curr[i]-'a']=0;
            }
            //exclude
           solve(words,v1,len,idx+1,ans);
            
        }
        else{
            solve(words,v1,len,idx+1,ans);
            
        }
        
    }
        
        
    int maxLength(vector<string>& words) {
    vector<int>v1(26,0);
        
        int ans=INT_MIN;
     solve(words,v1,0,0,ans);
        return ans;
        
        
    }
};