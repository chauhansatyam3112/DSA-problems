class Solution {
public:
    int flag;
    void solve(int i, string & str,int sum,int &exp)
    {
        int n=str.length();
        if(i==n)
        {
            if(exp==sum)
                flag=1;
            return;
        }
        for(int j=i;j<n;j++)
        {
            int p=j-i+1;
            string s=str.substr(i,p);
            int val=stoi(s);
            solve(j+1,str,sum+val,exp);
        }
    }
    int punishmentNumber(int n) {
        
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            int val=i*i;
            string str=to_string(val);
            flag=0;
            solve(0,str,0,i);
            if(flag==1)
                ans+=val;
        }
        return ans;
    }
};