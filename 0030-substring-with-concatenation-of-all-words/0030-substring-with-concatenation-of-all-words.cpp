class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        
          if(s.size() == 0 || words.size() == 0)
              
            return {};
        
        int n = words.size();
        
        int len = words[0].size();
        
        unordered_map<string, int> count;
        
        vector<int>ret;
        
        for(auto& word : words)
            
            count[word]++;
        
        for(int i = 0; i < s.size() - n*len+1; i++){
            
            unordered_map<string, int> Seen;
            
            int j;
            for(j = 0; j < n; j++){
                
                string tmp = s.substr(i + j*len, len);
                
                Seen[tmp]++;
                
                
                if(Seen[tmp] > count[tmp])
                    break;
            }
            if(j == n)
                
                ret.push_back(i);
        }
        return ret;
        
    }
};