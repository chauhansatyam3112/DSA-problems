class Solution {
public:
    int numberOfSpecialChars(string word) {
        
    multimap<char, pair<int, bool>> mp;
    
   
     for(int i = 0; i < word.length(); i++) {
        
        mp.insert({word[i], {i, false}});
     }
     
      vector<int> v(26, 0); 
     
    
      for(auto it = mp.begin(); it != mp.end(); ++it) {
        
        
          if(islower(it->first) && !it->second.second) {
            
            char upper = toupper(it->first);
            
            
             auto itr = mp.find(upper);
            
          
             if(itr != mp.end() && itr->second.first > it->second.first && !itr->second.second) {
                
                
                v[it->first - 'a']++; 
                
                it->second.second = true;
                
                itr->second.second = true;
            }
            
            else if(itr!=mp.end() && itr->second.first<it->second.first && itr->second.second)
            {
                v[it->first-'a']=0;
            }
        }
    }
    
    int cnt = 0;
        
    for(int i = 0; i < 26; i++) {
        
        cnt += v[i]; 
    }
    
    return cnt;
        
   
    }
};