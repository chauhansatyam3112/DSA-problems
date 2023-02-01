class Solution {
public:
    string Abhinav(string &s,string &p,int idx1,int idx2,vector<vector<string>>&dp){
        if(idx1<0 or idx2<0) return "";
     
     if(dp[idx1][idx2]!="") return dp[idx1][idx2];
     
        if(s[idx1]==p[idx2]){
            
         return dp[idx1][idx2] = s[idx1]+Abhinav(s,p,idx1-1,idx2-1,dp);
            
        }
string right = Abhinav(s,p,idx1-1,idx2,dp);
     
string left = Abhinav(s,p,idx1,idx2-1,dp);
     
     if(right.size()>=left.size()) {
         
         return dp[idx1][idx2]=right;
     }
    else {
        return dp[idx1][idx2]=left;
    }
 }
    string shortestCommonSupersequence(string str1, string str2) {
        
         int n=str1.size();
        
        int m=str2.size();
         
        vector<vector<string>>dp(n+1,vector<string>(m+1,""));
        
     string yp=Abhinav(str1,str2,n-1,m-1,dp);
        
        reverse(yp.begin(),yp.end());
        
       int i = 0, j = 0;
        
        string res = "";
        
        for(int k=0;k<yp.size();k++){
            
            while (str1[i] != yp[k]){
                
                res += str1[i++];
            }
            while (str2[j] != yp[k]){
                
                res += str2[j++];
            }
            res+=yp[k];
            
                i++;
            
                j++;
        }
       
        return res+str1.substr(i)+str2.substr(j);
        
        
    }
};