class Solution {
public:
    bool solve( string s1,string s2,string s3,int i,int j,int k,vector<vector<int>>&mem)
    {
        if(mem[i][j]!=-1)
        {
            return mem[i][j];
        }
        if(i==s1.length() &&j==s2.length()&& k==s3.length())
        {
            return true;
        }
        bool x=false,y=false;
        if(i!=s1.length())
        {
            if(s1[i]==s3[k])
            x=solve(s1,s2,s3,i+1,j,k+1,mem);
        }
        
        if(j!=s2.length())
        {
            if(s2[j]==s3[k])
            y=solve(s1,s2,s3,i,j+1,k+1,mem);
        }
    return mem[i][j]=x||y;
        
        
    }
    
    
    
    
    
    bool isInterleave(string s1, string s2, string s3) {
        
        
        int a=s1.length(),b=s2.length(),c=s3.length();
        int i=0,j=0,k=0;
        vector<vector<int>>mem(a+1,vector<int>(b+1,-1));
       return  solve(s1,s2,s3,0,0,0,mem);
        
        
    }
};