class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        int n=emails.size();
        set<string>s;
        for(int i=0;i<n;i++)
        {
            string back="";
            while(emails[i].back()!='@')
            {
                back+=(char)emails[i].back();
                emails[i].pop_back();
            }
            emails[i].pop_back();
            string start="";
            for(int j=0;j<emails[i].size();j++)
            {
                if(emails[i][j]=='+')
                    break;
                else if(emails[i][j]=='.')
                    continue;
                else 
                    start+=(char)emails[i][j];
            }
            string actual_email=start+(char)('@')+back;
            s.insert(actual_email);
        
//         for(string  email:emails)
//         {
//             int i;
//             string ans="";
//             for(i=0;email[i]!='@';i++)
//             {
//                 if(email[i]=='.')
//                     continue;
//                 else if(email[i]=='@'|| email[i]=='+')
//                     break;
//                 else
//                     ans+=email[i];
//             }
//             i=email.find('@');
//             ans+=email.substr(i,email.length()-1);
//             s.insert(ans);
                
            
   }
       return s.size();
        
    }
};