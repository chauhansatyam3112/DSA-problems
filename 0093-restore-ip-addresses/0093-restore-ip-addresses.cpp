class Solution {
public:
     void solve(vector<string>&ans,vector<string>&temp,string &s,int index)
     {
         if(index==s.size() && temp.size()==4)
         {
             string temp1=temp[0]+'.'+temp[1]+'.'+temp[2]+'.'+temp[3];
             ans.push_back(temp1);
             return;
         }
         string str="";
         for(int i=index;i<s.size() && temp.size()<4;i++)
         {
            // if(s[i]-'0'>9)continue;
             str+=s[i];
             int value=stoi(str);
             if(value>=0 && value<=255)
             {
                 temp.push_back(str);
                 solve(ans,temp,s,i+1);
                 temp.pop_back();
             }
             
             if(value<=0 || value>255)
             {
                break;
             }
         }
         
              
     }
    vector<string> restoreIpAddresses(string s){
      vector<string>ans;
    vector<string>temp;
      solve(ans,temp,s,0);
    return ans;
    
    
    }
};