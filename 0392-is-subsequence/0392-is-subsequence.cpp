class Solution {
public:
    bool isSubsequence(string s, string t) {
//           int i=0,j=0;bool flag=false;
//         if(s=="")
//         {
//             return false;
//         }
//          while(s[i+1]!=t[j] && s[i]!=s.back())
//          {
//              if(s[i]==t[j]){
//                  i++;j++;flag=true;}
             
//              else
//                  j++;
//          }
//         int k=j;
//         for(;k<t.length();k++)
//         {
//             if(s[i]==t[k])
//                 flag=true;
//             else
//                 flag=false;
                
//         }
//         if(flag)
//             return true;
//         else
//             return false;
        int n=s.size(),m=t.size();
        
        int j=0;
        for(int i=0;i<m && j<n;i++)
        {
            if(s[j]==t[i])
                j++;
            
                
        }
        return j==n;
    }
};