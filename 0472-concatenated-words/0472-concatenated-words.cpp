class Solution {
public:
//     int  solve(string&s, int index, int part, int n,unordered_map<string, int>&mp){
        
//         if(index>=n)         
//            return part;
//         else{
            
        
        
//         string temp="";
//         for(int i=index;i<n;i++){
//             temp+=s[i];
            
//             if(mp.find(temp)!=mp.end()){
//                 int ans=solve(s, i+1, part+1, n,mp);
             
//                 if(ans>=2)
//                     return ans;
//             }
//         }
        
//     return -1;
//         }
        
//     }  
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
       
            
//          vector<string> res;
//         int size=words.size();
//         unordered_map<string, int> mp;
//         for(auto word : words)
//         {
//             mp[word]++;
//         }
//         for(int i=0;i<size;i++){           
//             int n=words[i].size();
//             if(solve(words[i], 0,0, n,mp)>=2)
//             {
//                 res.push_back(words[i]);
//             }
//         }
        
//         return res;
        
         unordered_set<string> words_set;
        for (string word : words) words_set.insert(word);
        vector<string> res;
    
        for (string word : words) {
            int n = word.size();
            vector<int> dp(n + 1, 0);
            dp[0] = 1;
            for (int i = 0; i < n; i++) {
                if (!dp[i]) continue;
                for (int j = i + 1; j <= n; j++) {
                    if (j - i < n && words_set.count(word.substr(i, j - i))) {
                        dp[j] = 1;
                    }
                }
                if (dp[n]) {
                    res.push_back(word);
                    break;
                }
            }
        }
        return res;
        
    }
};