class Solution {
public:
    void solve(string &str, unordered_set<string>&st, queue<string>&q)
    {
        
        for(int i=0;i<4;i++)
        {
            
            char ch=str[i];
            
            char dec=ch=='0'?'9':ch-1;
            
            char incr=ch=='9'?'0':ch+1;
            
            str[i]=dec;
            
            if(st.find(str)==st.end())
            {
                st.insert(str);
                q.push(str);
            }
            
            str[i]=incr;
            
            if(st.find(str)==st.end())
            {
                st.insert(str);
                q.push(str);
            }
            
            str[i]=ch;
            
        }
    }
    
    
    int openLock(vector<string>& dead, string target) {
        
        int ans=0;
        
        
        unordered_set<string>st(dead.begin(),dead.end());
        
        if(st.find("0000")!=st.end())return -1;
        
        queue<string>q;
        
        q.push("0000");
        
        while(!q.empty())
        {
            int n=q.size();
            
            while(n--)
            {
                auto x=q.front();q.pop();
                
                if(x==target)return ans;
                
                solve(x,st,q);
            }
            
            ans++;
        }
        
        return -1;
        
    }
};