class Solution {
public:
    bool repeatedSubstringPattern(string s) {
//         string res="",ans="";
//         unordered_map<char,int>mp;
//         int n=s.length();
//         for(int i=0;i<s.length();i++)
//         {
//             mp[s[i]]++;
            
//         }
//         for(auto it:mp)
//         {
//             for(int i=0;i<(it.second)/2;i++)
//             {
//                 res+=it.first;
//             }
//         }
//         int m=res.length();
//         for(int i=0;i<n/m;i++)
//         {
//             ans+=res;
//         }
//          if(s==ans)
//         {
//             return true;
//         }return false;
        string ans="";
        int n=s.length();
        for(int i=n/2;i>=1;i--)
        {
            if(n%i==0)
            {
                int len=n/i;
                //str="";
                string str=s.substr(0,i);
                ans="";
                for(int j=0;j<len;j++)
                {
                    ans+=str;
                }
                if(s==ans)
                {
                    return true;
                }
            
            }
        }
        return  false;
        
        
    }
};