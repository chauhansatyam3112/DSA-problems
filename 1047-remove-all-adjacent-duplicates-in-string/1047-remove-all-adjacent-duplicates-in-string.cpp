class Solution {
public:
    string removeDuplicates(string s) {
        // int i=0;
        // for(int j=0;j<s.size();j++;i++)
        // {
        //     s[i]=s[j];
        //     if(i>0 && s[i]==s[i-1])
        //     {
        //         i-=2;
        //     }
        // }
        // return s.substr(0,i);
        
        string ans;ans.push_back(s[0]);
        for(int i=1;i<s.size();i++)
        {
            
            if(s[i]==ans.back())
                ans.pop_back();
          else
              ans.push_back(s[i]);
            
        }
        return ans;
    }
};