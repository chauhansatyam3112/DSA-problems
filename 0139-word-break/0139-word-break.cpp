class Solution {
public:
    int dp[301];
//     unordered_set<string> myset;
//     bool partition(string s,int pos){
//         if(pos==s.size())   return true;
//         if(mem.count(pos))  return mem[pos];
        
//         string t="";
//         for(int i=pos;i<s.size();++i)
//             if(myset.count(s.substr(pos,i-pos+1)) and partition(s,i+1))
//                 return mem[pos] = true;
//         return mem[pos] = false;
//     }
    int  partition(string s,int i,set<string>&st)
    {
        if(s.size()==i)return 1;
        if(dp[i]!=-1)return dp[i];
        
        string temp="";
        for(int j=i;j<s.size();j++)
            
        {
            
            temp+=s[j];
            if(st.find(temp)!=st.end())
            {
                if(partition(s,j+1,st))   return dp[i]=1;
                
            }
            
         }
        return dp[i]=0;
    }
    
    
    
    bool wordBreak(string s, vector<string>& wordDict) {
        memset(dp,-1,sizeof dp);
        set<string>st;
            
        for(auto str: wordDict)
            st.insert(str);
        
        return partition(s,0,st);
        
    }
};