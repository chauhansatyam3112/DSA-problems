class Solution {
public:
    void solve(string &s,vector<string>&ans,string &output,int i)
    {
        if(i==s.size()){
            ans.push_back(output);
            return;}
        
        if(isalpha(s[i]))
        {
            string curr1=output;
                curr1.push_back(tolower(s[i]));
                solve(s,ans,curr1,i+1);
            string curr2=output;
                curr2.push_back(toupper(s[i]));
                solve(s,ans,curr2,i+1);
        }
       else{
                             output.push_back(s[i]);
           solve(s,ans,output,i+1);
                             
           
       }
        
           
            
        
            
            
            
    }
    vector<string> letterCasePermutation(string s) {
        vector<string>ans;
        string output="";
         solve(s,ans,output,0);
        return ans;
    }
};