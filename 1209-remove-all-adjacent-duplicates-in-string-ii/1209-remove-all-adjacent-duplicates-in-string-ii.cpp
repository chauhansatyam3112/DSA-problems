class Solution {
public:
    string removeDuplicates(string s, int k) {
//         stack<char>st;map<char,int>mp;
//         st.push(s[0]);
//         for(int i=1;i<s.size();i++)
//         {
           
//             int cnt=1;
//             int p=k;
            
//            if(st.top()==s[i]) {
//            while(st.top()==s[i++] && cnt<=k){
//                st.push(s[i++]);
//                    cnt++;
//                mp[s[i]]++;
              
              
//              }
//            }
//             else{
//                 st.push(s[i]);
//                 mp[s[i]]++;
//             }
//           if(cnt>=k)
//           {
//               while(!st.empty() && cnt!=0)
//               {
//                   st.pop();cnt--;
//               }
//           }
//         else if(mp.find(st.top())!=mp.end()&& st.top()==s[i] && mp[s[i]]==k)
//         {
//             while(!st.empty() && p!=0)
//             {
//                 st.pop();p--;
                
//             }
//         }
        
            
//         }
//         string ans="";
//         while(!st.empty())
//             ans+=st.top();
//         reverse(ans.begin(),ans.end());
//         return ans;
         stack<pair<char, int>>stk;
        
        for(char ch: s)
        {
            if(!stk.empty() && stk.top().first == ch)
                stk.top().second++;
            else
                stk.push({ch, 1});
            
            if(stk.top().second == k)
                stk.pop();
        }
        
        string res = "";
        while(!stk.empty())
        {
            int size = stk.top().second;
            while(size--)
                res.push_back(stk.top().first);
            stk.pop();
        }
        
        reverse(res.begin(), res.end());
        
        return res;
    }
};