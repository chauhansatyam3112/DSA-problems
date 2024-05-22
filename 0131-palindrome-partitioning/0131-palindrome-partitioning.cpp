class Solution {
public:
    
    bool isPalindrome(string &str)
    {
        int i=0,j=str.length()-1;
        bool flag=false;
        
        while(i<j)
        {
            if(str[i]==str[j])
            {
                i++;j--;
            }
            else{
                flag=true;
                break;
            }
            
        }
        
        return flag==false;
    }
    void solve(string str,vector<string>&res,vector<vector<string>>&ans)
    {
        
        if(str.length()<=0)
        {
            ans.push_back(res);
            return;
        }
        
        
        
        for(int i=0;i<str.length();i++)
        {
            
            string temp=str.substr(0,i+1);
            string rem=str.substr(i+1);
            
            if(isPalindrome(temp))
            {
                res.push_back(temp);
                
                solve(rem,res,ans);
                res.pop_back();
            }
           
            
        }
    }
    vector<vector<string>> partition(string s) {
        
        vector<string>temp;
        vector<vector<string>>ans;
        
        
        solve(s,temp,ans);
        return ans;
     
    }
};