class Solution {
public:
//     int solve(string &s,int i,vector<int>&dp)
//     {
//         if(s.length()<=i)
//             return 0;
//         if(dp[i]==-1)
//             return dp[i];
        
//         if(s[i]=='(' && s[i+1]==')')
//          return dp[i]=   solve(s,i+2,dp);
//         else
//           return dp[i]=  solve(s,i+1,dp);
        
       
        
    
    int longestValidParentheses(string s) {
        stack<char>st1;
        stack<int>st2;
        st2.push(-1);
        int maxi=0;
       
            
        
        for(int i=0;i<s.length();i++)
        {
            if(st1.empty()&& s[i]==')'){
                st2.push(i);
            continue;}
            else if(s[i]=='(')
            {
               st1.push(s[i]);
                st2.push(i);
                
            }
            else
            {
                if (!st1.empty() && st1.top()=='('){
                    st1.pop();
                st2.pop();
                int p=st2.top();
               int len=i-p;
                maxi=max(maxi,len);
                
                }
                
                
                
            }
            
        }
            return maxi;
            
        }
//         stack<char>st;int  cnt=0;
//         int i=0;
//         while(i<s.length())
//         {
//             if(s[i]=='(' && s[i+1]==')'){
               
//             cnt+=2;
//             i++;}
            
//             else if((s[i]=='('&& s[i+1]!=')')||( s[i]==')'&& s[i-1]!='('))
//             {
//                 continue;
//             }
            
            
            
//         }
//         return cnt;
       // vector<int>dp(s.length(),-1);
       // return  solve(s,0,dp);
    
};