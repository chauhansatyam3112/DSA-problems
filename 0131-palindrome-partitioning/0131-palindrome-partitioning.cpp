class Solution {
public:
    
    bool isPalindrom(string s){
    int l = 0;
    int r = s.size() - 1;
    while(l < r){
        if(s[l++] != s[r--]){
            return false;
        }
    }
    return true;
}
    void solve(string s,vector<vector<string>>&ans,vector<string>temp)
    {
        if(s.size()==0)
        {
            ans.push_back(temp);
           // return ;
            
        }
        
        
        for(int i=0;i<s.size();i++)
        {
            string check=s.substr(0,i+1);
            string remain=s.substr(i+1);
            
            if(isPalindrom( check)){
                temp.push_back(check);
            solve(remain,ans,temp);
            
            temp.pop_back();
            }
        }
    }
               
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>temp;
        solve(s,ans,temp);
        return ans;
    }
};